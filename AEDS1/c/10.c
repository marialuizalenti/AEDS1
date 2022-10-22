#include <stdio.h>

int main(void) {
  //declarando variaveis velocidade permitida vp, velocidade do motorista vm e multa m
  int vp,vm,m=0;
  //perguntando e lendo vp e vm
  printf("Digite a velocidade máxima permitida da avenida:\n");
  scanf("%d",&vp);
  printf("Digite a velocidade do motorista:\n");
  scanf("%d",&vm);
  //se tem multa e seu valor ou se não tem multa
  if(vp>vm){
    printf("Motorista respeitou a lei\n");
  }
  else{
    if(vm-vp<=10){
      m=50;
    }
    else if(vm-vp<=30){
      m=100;
    }
    else{
      m=200;
    }
  }
  //imprimindo valor da multa
  printf("Multa: %d",m," reais");
  return 0;
}