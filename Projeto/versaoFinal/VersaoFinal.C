//Programa que calcula de forma paralela a constante e, atraves de openmp
//Nicolas Alteia Telles 42010225
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

//funcao do calculo fatorial
long double fatorial(int n) {
    long double result = 1;
    int i;
    for (i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main(int argc, char *argv[]) 
{
    //Variaveis e alocaçao de memoria para a variavel, sendo i o numero de iteracoes
    int i = 10000, n;
    long double *fatorialResult = (long double *) malloc((i + 1) * sizeof(long double));
    long double auxvar, resultTaylor;

    // Obtém o número de threads da linha de comando
    int thread_count = strtol(argv[1], NULL, 10);

    // Verifica threads da linha de comando
    if (argc < 2) {
        printf("Erro: você deve fornecer o número de threads na linha de comando.\n");
        return 1;
    }

    resultTaylor = 0;
    auxvar = 1;
    
    //funcao taylor realocada
    #pragma omp parallel for reduction(+:resultTaylor)
    for (n = 0; n <= i; n++) {
        fatorialResult[n] = fatorial(n);
        for (int j = 0; j < n; j++) 
        { 
            auxvar *= 1.0;
        }
        resultTaylor += auxvar / fatorialResult[n];
    }
    //print dos resultados
    printf("Polinômio: %.100Lf\n", resultTaylor);
    printf("Número de threads: %d\n", thread_count);
  
    //libera memoria da variavel
    free(fatorialResult);

    return 0;
}
