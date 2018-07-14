/*
  Como Criar Coisas Inteligentes com Arduino - Módulo 1
  Facilitador:       Prof. Orlewilson Bentes Maia
  Data Criacao:      13/07/2018
  Data Atualizao:    13/07/2018
  Descricao:         Alerta de proximidade de objetos
  Fonte:             https://portal.vidadesilicio.com.br/hc-sr04-sensor-ultrassonico/
*/

//Biblioteca do sensor ultrassonico
#include <Ultrasonic.h>

//Define os pinos para o trigger e echo
#define triggerPorta 4
#define echoPorta 5

//Inicializa o sensor nos pinos definidos acima
Ultrasonic ultrassom(triggerPorta, echoPorta);

// Porta digital no qual sera colocado o buzzer
int buzzerPorta = 11;

float seno;
int frequencia;

// variável que guardará o valor da distância lida pelo ultrassônico
long distancia;

// tocar alarme conforme distância
void tocarAlarme(int intensidade){
  tone(buzzerPorta,intensidade);
}

// parar alarme
void pararAlarme(){
  noTone(buzzerPorta);
}

void setup()
{
  // Configura porta serial
  Serial.begin(9600);
  Serial.println("Lendo dados do ultrasônico...");
}

void loop()
{
  // ultrassom.Ranging(CM) retorna a distancia em centímetros(CM) ou polegadas(INC)
  distancia = ultrassom.Ranging(CM);
  Serial.print(distancia); //imprime o valor da variável distancia
  Serial.println("cm");
  delay(100);

  if (distancia < 5){
    tocarAlarme(300);
  } else if (distancia < 10){
    tocarAlarme(100);
  } else {
    pararAlarme();
  }
}
