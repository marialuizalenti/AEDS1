/*Crie uma classe Equipamento com o atributo ligado (tipo boolean) e com os métodos liga e desliga.  O  método  liga()  torna  o  atributo  ligado  true  e  o  método  desliga()  torna  o  atributo ligado false. Crie também uma classe EquipamentoSonoro que herda as características de Equipamento e que  possui  os  atributos  volume  (tipo  short)  que  varia  de  0  a  10  e  stereo  (tipo  boolean).  A classe ainda deve possuir métodos get para retornar valor de cada atributo e set para gravar um  valor  em  um  atributo.  Crie  também  os  métodos  mono()  e  stereo().  O  método  mono() torna o atributo stereo falso e o método stereo() torna o atributo stereo verdadeiro. Ao ligar o EquipamentoSonoro através do método liga, seu volume é automaticamente ajustado para 
5. */

#include <iostream>
#include <string>
class Equipamento{
public:
bool ligado;

void liga(){
  ligado = true;
}
void desliga(){
  ligado = false;
}
};

class EquipamentoSonoro : Equipamento{
short volume;
bool stereo;

void setVolume(short _volume){
  if(ligado==true){
  volume=5;
  }
  volume = _volume;
}
void setStereo(short _stereo){
  stereo = _stereo;
}

short getVolume(){
  return volume;
}
bool getStereo(){
  return stereo;
}

void mono(){
  stereo=false;
}
void TrueStereo(){
  stereo=true;
}

};
int main() {
  
}
}