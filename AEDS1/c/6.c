#include <stdio.h>

int main(void) {
  int x,y;
  //perguntando e lendo um valor p/ x
  printf("Digite um valor para x:\n");
  scanf("%d",&x);
  //condições de x p/ o valor y
  if(x<=1)
    y=1;
  else if(x<=2)
    y=2;
  else if(x<=3)
    y=x*x;
  else
    y=x*x*x;
  //imprimindo o valor de y
  printf("O valor de y é: %d",y);
      return 0;
}