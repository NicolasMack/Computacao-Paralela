#include <stdio.h>

int main(void) {
  float N1;
  float N2;
  float N3;
  float ME;
  printf("Digite o valor da nota N1: ");
  scanf("%f", &N1);
  printf("Digite o valor da nota N2: ");
  scanf("%f", &N2);
  printf("Digite o valor da nota N3: ");
  scanf("%f", &N3);
  printf("Digite o valor da nota ME: ");
  scanf("%f", &ME);
  float MA;
  MA = (N1 + N2*2 + N3*3 + ME)/7;
  char conceito;
  if (MA >= 9){
    conceito = 'A';
  }
  else if (MA < 9 && MA >= 7.5){
    conceito = 'B';
  }
  else if (MA < 7.5 && MA >= 6){
    conceito = 'C';
  }
  else if (MA < 6 && MA >= 4){
    conceito = 'D';
  }
  else{
    conceito = 'E';
  }
  printf("Conceito: %c", conceito);
  return 0;
}