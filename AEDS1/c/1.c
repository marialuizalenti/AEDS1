#include <stdio.h>

int main(void) {
  float a,b,x;
  printf("Digite os coeficientes:\n");
  scanf("%f %f", &a,&b);
  //verificando se a equação é válida
  if(a!=0){
    x=-b/a;
    printf("A raiz é: %f",x);
  }
  else{
    printf("Equação inválida");
  }
  
  return 0;
}