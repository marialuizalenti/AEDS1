#include <stdio.h>

int main(void) {
  float sa,sn;
  char op;
  printf("Digite o salário\n");
  scanf("%f",&sa);
  printf("Escolha uma opção: a,b ou c\n");
  scanf("%c",&op);
  switch(op){
    case 'a': sn=sa*1.08;break;
    case 'b': sn=sa*1.11;break;
    case 'c': if(sa<=1000){
      sn=sa+350;
      }
      else{
        sn=sa+200;
        };break; 
      }
  printf("Novo salário: %f",sn);
  return 0;
    }
  
  