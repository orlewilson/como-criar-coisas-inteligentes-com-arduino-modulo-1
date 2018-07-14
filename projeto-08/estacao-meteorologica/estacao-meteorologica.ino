/*
  Como Criar Coisas Inteligentes com Arduino - Módulo 1
  Facilitador:       Prof. Orlewilson Bentes Maia
  Data Criacao:      13/07/2018
  Data Atualizao:    13/07/2018
  Descricao:         Ler valores dos sensores DHT (umidade e temperatura) e LDR (luminosidade) e 
                     mostrar no display LCD
*/

// Inclui a biblioteca DHT
#include "DHT.h" 

// Inclui a biblioteca LCD
#include <LiquidCrystal.h>     

// Porta na qual lerá os valores do sensor DHT
int dthPorta = A0;

// Cria um objeto da classe dht
DHT dht(dthPorta, DHT22); 

// variáveis que armazenarão os valores lidos do sensor DHT
float valorTemp;
float valorUmidade;

// Configuração do LCD
LiquidCrystal lcd(2,3,4,5,6,7);
/*Cria objeto lcd da classe LiquidCrystal
RS     2
Enable 3
DB4    4
DB5    5
DB6    6
DB7    7
*/

// Porta na qual será lido o valor do sensor de luminosidade
int lumiPorta = A1;

// armazenará o valor lido do sensor de luminosidade
int valorLuminosidade;

// Função para atrasar em n segundos
void atraso (int n){

   // Funcao do Arduino para parar durante um certo tempo em milisegundos (ms)
  delay(1000 * n); // atraso em n segundos
  
}

// Função para mostrar valores lidos dos sensores no LCD
void mostrarValores(float temperatura, float umidade, int luminosidade){
  
  //Limpa a tela do LCD
  lcd.clear();   
  
  //Mostra valor da temperatura
  lcd.setCursor(0,0);         
  lcd.print("T: ");
  lcd.setCursor(2,0);         
  lcd.print(temperatura);
  
  //Mostra valor da umidade
  lcd.setCursor(0,1);         
  lcd.print("U: ");
  lcd.setCursor(2,1);         
  lcd.print(umidade);

  //Mostra valor da luminosidade
  lcd.setCursor(10,1);         
  lcd.print("L: ");
  lcd.setCursor(12,1);         
  lcd.print(luminosidade);
}

void setup(){
  
  //Inicializa display de 2 linhas x 16 colunas
  lcd.begin(16,2);            
  
  //Posiciona cursor no canto superior esquerdo
  lcd.home();      

  //Executa uma pequena contagem regressiva
  lcd.print("3 ");           
  delay(500);
  lcd.print("2 ");
  delay(500);
  lcd.print("1 ");
  delay(500);

  //Limpa a tela do LCD
  lcd.clear();       
  
  delay(500);

  //Posiciona o cursor na posição coluna X linha (6,0)
  lcd.setCursor(6,0);         

  //Escreve IoT
  lcd.print("IoT");  

  delay(500);

  //Posiciona o cursor na posição coluna X linha (4,1)
  lcd.setCursor(4,1);
  
  //Escreve Modulo 1
  lcd.print("Modulo 1");
}
 
void loop(){
  // ler os valores dos sensores
  valorLuminosidade = analogRead(lumiPorta);
  valorUmidade = dht.readHumidity();
  valorTemp = dht.readTemperature();

  // mostra os valores no LCD
  mostrarValores(valorTemp, valorUmidade, valorLuminosidade);

  atraso(1);
}
