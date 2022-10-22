#include <stdio.h>
#include <string.h>
// função para saber o tamanho da palavra
int tam(char palavra[]) {
  int contador = 0;
  int i = 0;

  while (palavra[i] !=
         '\0') { // enquanto não for o final da palavra incrementar contador
    contador++;
    i++;
  }

  return contador - 1;
}
// função verificar se é palindromo
bool isPalindromo(char *palavra) {
  bool resp = true;
  int inicio = 0; //primeiro caracter
  int fim = tam(palavra) - 1; //ultimo caracter

  while (inicio < fim / 2) { //percorrer só metade da palavra
    if (palavra[inicio] != palavra[fim]) //comparacao letras
      resp = false;
    inicio++; //vai pulando pra frente as posições
    fim--;//vai pulando pra tras a partir do ultimo
  }
  return resp;
}
// função de parada
bool isFim(char *str) {
  return (tam(str) >= 3 && str[0] == 'F' && str[1] == 'I' && str[2] == 'M'); //retorna true se palavra tiver 3 letras e caracteres seguirem de F I e M
}

int main() {
  char string[200][200];
  int cont = 0; //contar palavras

  do {
    fgets(string[cont], 200, stdin);
  } while (isFim(string[cont++]) == false); //só para quando for digitado FIM, vai incrementando contador a cada palavra digitada
  cont--; // Desconsiderar a ultima palavra(FIM)


  for (int i = 0; i < cont; i++) {
    if (isPalindromo(string[i]))
      printf("SIM\n"); //se for palindromo imprimir sim
    else
      printf("NAO\n"); 
  }
}