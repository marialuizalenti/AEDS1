#include <stdio.h>

int main(void) {
  //declarando variavel simbolo s como caracter
  char s;
  //perguntando e lendo o simbolo
  printf("Digite um símbolo:\n");
  scanf("%c",&s);
  //condições para o simbolo digitado
  switch(s){
    case '<': printf("SINAL DE MENOR");break;
    case '>': printf("SINAL DE MAIOR");break;
    case '=': printf("SINAL DE IGUAL");break;
    default: printf("OUTRO SINAL");   
  }
  return 0;
}