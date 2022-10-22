#include <stdio.h>

int main(void) {
 
  int n1,n2,r;
  printf("Digite dois números:\n");
  scanf("%d %d",&n1,&n2);
  r=n1+n2;
  //Condições para valor de r
  if(r>=10){
    r=r+5;
  }
  else{
    r=r+7;
  }
  printf("O resultado final é %d",r);

  
  return 0;
}