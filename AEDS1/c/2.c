#include <stdio.h>

int main(void) {
  //declaração de variaveis
  float n1,n2;
  //exibir mensagem
  printf("Digite dois números: \n");
  scanf("%f %f", &n1,&n2);//armazenando dados
  //adicionando condição
  if(n1>n2){
    printf("O maior número é %f",n1);
  }
  else{
    printf("O maior número é %.1f", n2);
  }
  
  return 0;
}