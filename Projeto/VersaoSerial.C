# Versao Serial do projeto
#include <stdio.h>
#include <math.h>

int main() {
    int i, n;
    float x, resultTaylor;
    
    //variaveis, sendo i o numero de iterações
    printf("digite o numero de termos: ");
    scanf("%d", &i);
    
    resultTaylor = 0;
    for (n = 0; n <= i; n++) {
        resultTaylor += pow(1, n) / tgamma(n + 1);
        
    }
    printf("Polinomio: %.4f\n", resultTaylor);
    
    return 0;
}
