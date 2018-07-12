/*
  Como Criar Coisas Inteligentes com Arduino - Módulo 1
  Facilitador:       Prof. Orlewilson Bentes Maia
  Data Criacao:      11/07/2018
  Data Atualizao:    11/07/2018
  Descricao:         Simulador semáforo
*/

// Porta digital no qual sera colocado um LED vermelho
int ledVermelho = 13;

// Porta digital no qual sera colocado um LED amarelo
int ledAmarelo = 12;

// Porta digital no qual sera colocado um LED verde
int ledVerde = 11;

// Função para ligar LED Vermelho
void ligarLEDVermelho(){
  digitalWrite(ledVermelho, HIGH);
}

// Função para ligar LED Vermelho
void desligarLEDVermelho(){
  digitalWrite(ledVermelho, LOW);
}

// Função para ligar LED Amarelo
void ligarLEDAmarelo(){
  digitalWrite(ledAmarelo, HIGH);
}

// Função para ligar LED Amarelo
void desligarLEDAmarelo(){
  digitalWrite(ledAmarelo, LOW);
}

// Função para ligar LED Verde
void ligarLEDVerde(){
  digitalWrite(ledVerde, HIGH);
}

// Função para ligar LED Verde
void desligarLEDVerde(){
  digitalWrite(ledVerde, LOW);
}

// Função para atrasar em n segundos
void atraso (int n){

   // Funcao do Arduino para parar durante um certo tempo em milisegundos (ms)
  delay(1000 * n); // atraso em n segundos
  
}

// Funcao para configurar o Arduino
void setup() {                

  // Indica qual porta digital será utilizada como saida (ligar/desligar um LED vermelho)
  pinMode(ledVermelho, OUTPUT);
  // Indica qual porta digital será utilizada como saida (ligar/desligar um LED amarelo)
  pinMode(ledAmarelo, OUTPUT);
  // Indica qual porta digital será utilizada como saida (ligar/desligar um LED verde)
  pinMode(ledVerde, OUTPUT);     
}

// Funcao principal do Arduino que ficara em loop infinito
void loop() {

  desligarLEDVermelho();
  desligarLEDAmarelo();
  ligarLEDVerde();
  
  atraso(5);

  desligarLEDVerde();
  ligarLEDAmarelo();
  
  atraso(2);
  
  desligarLEDAmarelo();
  ligarLEDVermelho();
  atraso(5);
}
