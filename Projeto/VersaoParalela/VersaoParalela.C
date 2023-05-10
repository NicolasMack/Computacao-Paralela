#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int fatorial(int n) {
    int i, x = 1;
    for (i = 1; i <= n; i++) {
        x *= i;
    }
    return x;
}

void taylor(float *resultTaylor, float auxvar, int i) {
    int n;
    static double localresultTaylor = *resultTaylor;
    #pragma omp parallel for reduction(+:localresultTaylor)
    for (n = 0; n <= i; n++) {
        localresultTaylor += auxvar / fatorial(n);
        auxvar *= 1.0;
    }
    *resultTaylor=localresultTaylor;
}

int main(int argc, char *argv[]) {
    int i;
    float auxvar = 1.0, resultTaylor = 0.0;
    
    // Obtém o número de threads da linha de comando
    int thread_count = strtol(argv[1], NULL, 10);
    
    // Verifica se o usuário forneceu o número de threads na linha de comando
    if (argc < 2) {
        printf("Erro: você deve fornecer o número de threads na linha de comando.\n");
        return 1;
    }
    
    // Pede ao usuário o número de iterações
    printf("Digite o número de iterações: ");
    scanf("%d", &i);

    // Calcula o polinômio de Taylor
    taylor(&resultTaylor, auxvar, i);

    // Imprime o resultado
    printf("Polinômio: %.4f\n", resultTaylor);
    printf("Número de threads: %d\n", thread_count);

    return 0;
}
