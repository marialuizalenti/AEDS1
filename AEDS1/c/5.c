#include <stdio.h>

int main(void) {
  //declarando variaveis
  float dn, dp,va80,va50,d;
  //a é igual ao numero de aparts. disponiveis
  int a=75;
  //perguntando e lendo o valor da diaria normal
  printf("Qual o valor da diária?\n");
  scanf("%f",&dn);
  //calc desconto
  dp=dn*0.75;
  printf("Diária Promocional %.2f",dp);
  //calc valor arrecadado c 80%
  va80=a*0.8*dp;
  printf("\nValor arrecadado com 80%% de ocupação e diária promocional: %.2f",va80);
    //calc valor arrecadado c 50%
  va50=a*0.5*dn;
  printf("\nValor arrecadado com 50%% de ocupação e diária normal: %.2f",va50);
  //calc diferença dos valores arrecadados
d=va80-va50;
  printf("Diferença: %.2f",d);

  
  return 0;
}