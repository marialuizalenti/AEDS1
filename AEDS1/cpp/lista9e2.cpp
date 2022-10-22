/*Crie uma classe Pessoa com atributos: nome e sobrenome. 
A classe ainda deve conter os seguintes métodos: 
 Um construtor com os dados de nome e sobrenome para os atributos. 
 getNomeCompleto() que não possui parâmetros de entrada e que escreve a concatenação 
do atributo nome com o atributo sobrenome; 
Implemente também uma subclasse de Pessoa, chamada Funcionario. A classe Funcionario 
deve  ter  os  atributos  matricula  (tipo  int)  e  salario  (tipo  double),  com  um  construtor  que 
invoca o construtor da superclasse e acrescenta os valores aos seus atributos.  
O salário de um funcionário jamais poderá ser negativo. Todo funcionário recebe seu salário 
em duas parcelas, sendo 60% na primeira parcela e 40% na segunda parcela. Assim, escreva 
os métodos:  
 getSalarioPrimeiraParcela() que retorna o valor da primeira parcela do salário; 
 getSalarioSegundaParcela() que retorna o valor da segunda parcela do salário. 
Crie uma subclasse de Funcionario, chamada Professor. Todo professor recebe seu salário 
em uma única parcela. Assim, devem-se sobrescrever os métodos 
getSalarioPrimeiraParcela() e getSalarioSegundaParcela(). O método 
getSalarioPrimeiraParcela() da classe Professor deve retornar o valor integral do salário do 
professor e o método getSalarioSegundaParcela() do professor deve retornar o valor zero. 
Crie também um construtor que invoca o construtor da superclasse. */

#include <iostream>
#include <string>
using namespace std;

class Pessoa{
protected:
string nome;
string sobrenome;

public:
 Pessoa(string _nome,string _sobrenome){
   nome=_nome;
   sobrenome=_sobrenome;
}
string getNomeCompleto(){
  return (nome + sobrenome);
}
};

class Funcionarios:Pessoa{
protected:
int matricula;
float salario;

public:
Funcionarios::Pessoa(int _matricula,float _salario){
  matricula=_matricula;
  salario=_salario;
}
if(salario<0){
printf("O salário não pode ser negativo");
}
else{
float getSalarioPrimeiraParcela(){
  return salario*0.6;
}
float getSalarioSegundaParcela(){
  return salario*0.4;
}
}

};

class Professor:Funcionarios{
public:
float getSalarioPrimeiraParcela(){
  return salario;
}
float getSalarioSegundaParcela(){
  return 0;
}
public:
void Professor::Funcionarios(){

}
};

int main() {
  std::cout << "Hello World!\n";
}