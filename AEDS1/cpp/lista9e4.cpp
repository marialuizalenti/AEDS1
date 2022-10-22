/*Dados  os  seguintes  campos  de  uma  classe  Pessoa:    nome,  dia  de  aniversário  e  mês  de 
aniversário, desenvolver um programa que preencha um cadastro de 10 pessoas e grave em um arquivo (nome fornecido pelo usuário) cada um dos meses do ano e quem são as pessoas que fazem aniversário naquele mês, exibir também o dia. Na classe Pessoa, crie os métodos para manipular os atributos (construtores, assessores, métodos gerais). */
#include <iostream>
#include <string>
using namespace std;
//criando classe
class Pessoa{
protected:
string nome;
int dia;
int mes;
//criando construtor
public:
Pessoa(string _nome,int _dia, int _mes){
  nome=_nome;
  dia=_dia;
  mes=_mes;
}
};
int main() {
  int n=11;
  Pessoa ani(n);
  FILE *arq;
//abrindo arquivo
  arq=fopen("arquivo.txt","r+");
//lendo vetor
 for(int i=0; i<n; i++){
    printf("Digite o nome:\n");
    scanf("%s",ani[i].nome);
    printf("Digite o dia do aniversário:\n");
    scanf("%d",&ani[i].dia);
    printf("Digite o mês do aniversário:\n");
    scanf("%d",&ani[i].mes);
  }
  printf("\nAniversariantes de Janeiro:");
  for(int i=0; i<n; i++){
    if(ani[i].mes==1)
      printf("\n%s - %d / %d",ani[i].nome, ani[i].dia,ani[i].mes);
  }
  printf("\nAniversariantes de Fevereiro:");
  for(int i=0; i<n; i++){
    if(ani[i].mes==2)
      printf("\n%s - %d / %d",ani[i].nome, ani[i].dia,ani[i].mes);
  }
  printf("\nAniversariantes de Março:");
  for(int i=0; i<n; i++){
    if(ani[i].mes==3)
      printf("\n%s - %d / %d",ani[i].nome, ani[i].dia,ani[i].mes);
  }
  printf("\nAniversariantes de abril:");
  for(int i=0; i<n; i++){
    if(ani[i].mes==4)
      printf("\n%s - %d / %d",ani[i].nome, ani[i].dia,ani[i].mes);
  }
  printf("\nAniversariantes de maio:");
  for(int i=0; i<n; i++){
    if(ani[i].mes==5)
      printf("\n%s - %d / %d",ani[i].nome, ani[i].dia,ani[i].mes);
  }
  printf("\nAniversariantes de junho:");
  for(int i=0; i<n; i++){
    if(ani[i].mes==6)
      printf("\n%s - %d / %d",ani[i].nome, ani[i].dia,ani[i].mes);
  }
  printf("\nAniversariantes de julho:");
  for(int i=0; i<n; i++){
    if(ani[i].mes==7)
      printf("\n%s - %d / %d",ani[i].nome, ani[i].dia,ani[i].mes);
  }
  printf("\nAniversariantes de agosto:");
  for(int i=0; i<n; i++){
    if(ani[i].mes==8)
      printf("\n%s - %d / %d",ani[i].nome, ani[i].dia,ani[i].mes);
  }
  printf("\nAniversariantes de setembro:");
  for(int i=0; i<n; i++){
    if(ani[i].mes==9)
      printf("\n%s - %d / %d",ani[i].nome, ani[i].dia,ani[i].mes);
  }
  printf("\nAniversariantes de outubro:");
  for(int i=0; i<n; i++){
    if(ani[i].mes==10)
      printf("\n%s - %d / %d",ani[i].nome, ani[i].dia,ani[i].mes);
  }
  printf("\nAniversariantes de novembro:");
  for(int i=0; i<n; i++){
    if(ani[i].mes==11)
      printf("\n%s - %d / %d",ani[i].nome, ani[i].dia,ani[i].mes);
  }
  printf("\nAniversariantes de dezembro:");
  for(int i=0; i<n; i++){
    if(ani[i].mes==12)
      printf("\n%s - %d / %d",ani[i].nome, ani[i].dia,ani[i].mes);
  }
  //fechando arquivo
  fclose(arq);
  return 0;
}