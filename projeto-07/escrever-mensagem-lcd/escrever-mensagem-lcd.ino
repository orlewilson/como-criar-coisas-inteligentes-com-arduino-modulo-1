/*
  Como Criar Coisas Inteligentes com Arduino - Módulo 1
  Facilitador:       Prof. Orlewilson Bentes Maia
  Data Criacao:      13/07/2018
  Data Atualizao:    13/07/2018
  Descricao:         Escrever uma mensagem em uma tela LCD 16x2
*/


// Porta digital no qual sera colocado um LED para ser ligado e desligado
int led = 11;

// Porta analogica no qual sera lido o valor do potenciometro
int potenciometro = A0;

// Variavel para armazenar o valor lido do potenciometro
int valorPotenciometro = 0;

// Função para ligar LED ajustando o brilho
void ligarLED(int brilho){
  analogWrite(led, brilho);
}

// Função para atrasar em n segundos
void atraso (int n){

   // Funcao do Arduino para parar durante um certo tempo em milisegundos (ms)
  delay(1000 * n); // atraso em n segundos
  
}

// Funcao para configurar o Arduino
void setup() {                

  // Indica qual porta analógica sera utilizada como saida (ligar/desligar um LED)
  pinMode(led, OUTPUT);

  // Indica que utilizara a porta serial para imprimir
  Serial.begin(9600);

}

// Funcao principal do Arduino que ficara em loop infinito
void loop() {

  // ler o valor atual do potenciometro
  // o valor varia entre 0 e 1023
  valorPotenciometro = analogRead(potenciometro);

  // imprime na porta serial o valor do potenciômetro
  Serial.println(valorPotenciometro);
  
  // Transformo o valor lido do potenciômetro de 0 a 1023 para 0 a 255 dividindo por 4
  ligarLED(valorPotenciometro/4);
  // função map mapeia valores a partir de um intervalo
  // map(valor, valor_inicial_antigo, valor_final_antigo, valor_inicial_novo, valor_final_novo)
  //ligarLED(map(valorPotenciometro,0,1023,0,255));
  
  atraso(1);
}
