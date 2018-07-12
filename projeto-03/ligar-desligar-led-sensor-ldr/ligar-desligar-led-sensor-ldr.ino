/*
  Como Criar Coisas Inteligentes com Arduino - Módulo 1
  Facilitador:       Prof. Orlewilson Bentes Maia
  Data Criacao:      06/07/2018
  Data Atualizao:    06/07/2018
  Descricao:         Ligar e desligar um LED a partir do sensor LDR (luminosidade)
*/ 

// Porta digital no qual sera colocado um LED para ser ligado e desligado
int led = 11;

// Porta analogica no qual sera lido o valor do sensor de luminosidade
int luminosidade = A0;

// Variavel para armazenar o valor lido do sensor de luminosidade
int valorLuminosidade = 0;

// Funcao para ligar o LED
void ligarLed(){
  digitalWrite(led, HIGH);
}

// Funcao para desligar o LED
void desligarLed(){
  digitalWrite(led, LOW);
}


// Funcao para configurar o Arduino
void setup() {                

  // Indica qual porta digital sera utilizada como saida (ligar/desligar um LED)
  pinMode(led, OUTPUT);  

  // Indica que utilizara a porta serial para imprimir
  Serial.begin(9600);
  
}

// Funcao principal do Arduino que ficara em loop infinito
void loop() {
  
  
  // ler o valor atual do sensor de luminosidade
  // quanto mais próximo de zero está mais escuro e quanto mais afastado de zero está mais claro
  // esse valor varia conforme o resistor
  valorLuminosidade = analogRead(luminosidade);
  
  // imprime na porta serial o valor do sensor de luminosidade
  Serial.println(valorLuminosidade);
  
  // se o valor for menor que 300, ligara o LED (você ajusta conforme o resistor)
  if (valorLuminosidade < 300){
    ligarLed();
  } else {
    desligarLed();
  }
}

