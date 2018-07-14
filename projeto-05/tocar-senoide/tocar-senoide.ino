/*
  Como Criar Coisas Inteligentes com Arduino - Módulo 1
  Facilitador:       Prof. Orlewilson Bentes Maia
  Data Criacao:      13/07/2018
  Data Atualizao:    13/07/2018
  Descricao:         Tocar uma senoide
  Fonte:             https://portal.vidadesilicio.com.br/usando-o-buzzer-com-arduino-transdutor-piezo-eletrico/
*/

// Porta digital no qual sera colocado um LED vermelho
int buzzerPorta = 11;

float seno;
int frequencia;

// Tocar uma senoide
void tocarFrequencia(){
  for(int x=0;x<180;x++){
    //converte graus para radiando e depois obtém o valor do seno
    seno=(sin(x*3.1416/180));
    //gera uma frequência a partir do valor do seno
    frequencia = 2000+(int(seno*1000));
    tone(buzzerPorta,frequencia);
    delay(2);
  }
}
void setup() {
  // Indica qual porta digital será utilizada como saida do buzzer
  pinMode(buzzerPorta,OUTPUT);
}

void loop() {
  tocarFrequencia();
}
