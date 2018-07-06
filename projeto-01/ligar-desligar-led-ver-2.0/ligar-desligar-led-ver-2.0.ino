/*
  Como Criar Coisas Inteligentes com Arduino - Módulo 1
  Facilitador:       Prof. Orlewilson Bentes Maia
  Data Criacao:      05/07/2018
  Data Atualizao:    05/07/2018
  Descricao:         Ligar e desligar um LED
*/

// Porta digital no qual sera colocado um LED para ser ligado e desligado
int led = 13;

// Função para ligar LED
void ligarLED(){
  // Funcao do Arduino para ligar o LED (colocar nivel alto, ou seja, 5V)
  digitalWrite(led, HIGH);
}

// Função para ligar LED
void desligarLED(){
  // Funcao do Arduino para desligar o LED (colocar nivel baixo, ou seja, 0V)  
  digitalWrite(led, LOW);
}

// Função para atrasar em n segundos
void atraso (int n){

   // Funcao do Arduino para parar durante um certo tempo em milisegundos (ms)
  delay(1000 * n); // atraso em n segundos
  
}

// Funcao para configurar o Arduino
void setup() {                

  // Indica qual porta digital sera utilizada como saida (ligar/desligar um LED)
  pinMode(led, OUTPUT);     
}

// Funcao principal do Arduino que ficara em loop infinito
void loop() {

  ligarLED();
  
  atraso(1);

  desligarLED();

  atraso(1);
}
