/*Uma pessoa criou um arquivo (nome fornecido pelo usuário) que contém as informações de 
15 eletrodomésticos: nome da loja, telefone e preço de cada eletrodoméstico. Elabore uma 
classe chamada Eletrodomestico com esses atributos e métodos para manipulá-los 
(construtores, assessores, exibição). Desenvolva um programa que permita ler os dados deste 
arquivo  e  preencher  um  vetor  com  objetos  do  tipo  Eletrodomestico.  O  programa  também 
deve  calcular  e  gravar  em  um  outro  arquivo  (nome  fornecido  pelo  usuário)  a  média  dos 
preços cadastrados e uma relação contendo o nome e o telefone das lojas cujo preço estava 
abaixo da média. */

#include <iostream>
#include <string>
using namespace std;
//criando classe
class Eletrodomestico{
public:
string nome;
int telefone;
float preco;
//construtor
public:
Eletrodomestico(string _nome,int _tel,float _preco){

  nome=_nome;
  telefone=_tel;
  preco=_preco;
}


};
int main() {
  FILE *arquivo;
  char nome_arq[10];
  char nome[50], telefone[10],pr[10];
  float preco;
  Eletrodomestico e[15];
//usuario digita um nome p o arquivo
  printf("Digite o nome do arquivo:\n");
  scanf("%s",nome_arq);
  //abrir arq e escrever nele
  arquivo=fopen(nome_arq,"w");
   for(int i=10;i<=15;i++){
     //ler e escrever no arq os dados da classe eletromestico
     fscanf("%s %d %f",e.nome,e.telefone,e.preco);
     fprintf("%s \n %s \n %f", nome, telefone, preco);
   }
    fclose(arquivo);
}