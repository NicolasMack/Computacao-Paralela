#include <stdio.h>

int fatorial(int n) {
    int i, x = 1;
    for (i = 1; i <= n; i++) {
        x *= i;
    }
    return x;
}

int main() {
    int i, n;
    float auxvar, resultTaylor;
    
    // variaveis, sendo i o numero maximo de termos
    printf("digite o numero de iteracoes: ");
    scanf("%d", &i);
    
    resultTaylor = 0;
    auxvar = 1;
    for (n = 0; n <= i; n++) {
        resultTaylor += auxvar / fatorial(n);
        auxvar *= 1;
        
    }
    printf("Polinomio: %.4f\n", resultTaylor);
    
    return 0;
}
