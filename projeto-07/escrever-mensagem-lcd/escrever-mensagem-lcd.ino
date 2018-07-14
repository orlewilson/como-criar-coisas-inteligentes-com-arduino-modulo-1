/*
  Como Criar Coisas Inteligentes com Arduino - Módulo 1
  Facilitador:       Prof. Orlewilson Bentes Maia
  Data Criacao:      13/07/2018
  Data Atualizao:    13/07/2018
  Descricao:         Escrever uma mensagem em uma tela LCD 16x2
  Fonte:             https://portal.vidadesilicio.com.br/display-lcd-16x2-com-arduino/
*/

#include <LiquidCrystal.h>     //inclui biblioteca no programa 

LiquidCrystal lcd(2,3,4,5,6,7);
/*Cria objeto lcd da classe LiquidCrystal
RS     2
Enable 3
DB4    4
DB5    5
DB6    6
DB7    7
*/

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
 
}
