#include <stdio.h>

int main(void) {
//declarando variavel nota como inteiro
int n;
//perguntando e recebendo nota n  
printf("Digite a nota do aluno:\n");
scanf("%d",&n);
//verificando  condições da nota
  if(n<5){
   printf("Insatisfatório");
  }else if(n<7){
    printf("Regular");
  }else if(n<8){
    printf("Bom");
  }else{
    printf("Ótimo");
  }
  return 0;
}