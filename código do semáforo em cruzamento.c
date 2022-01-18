//semáforo em cruzamentos by Yuri Bueno

int vermelho_1 = 8;
int vermelho_2 = 13;
int amarelo_1 = 9;
int amarelo_2 = 12;
int verde_1 = 10;
int verde_2 = 11;
 
void setup() {
  pinMode(vermelho_1, OUTPUT);
  pinMode(amarelo_1, OUTPUT);
  pinMode(verde_1, OUTPUT);
 
  pinMode(vermelho_2, OUTPUT);
  pinMode(amarelo_2, OUTPUT);
  pinMode(verde_2, OUTPUT);
}
 
void loop() {
   cruzamento();
}
 
void cruzamento() {
 
  // sinal 1

  digitalWrite(vermelho_1, HIGH);
  digitalWrite(amarelo_1, LOW);
  digitalWrite(verde_1, LOW);
 
  // sinal 2
  
  digitalWrite(vermelho_2, LOW);
  digitalWrite(amarelo_2, LOW);
  digitalWrite(verde_2, HIGH);

  delay(10000);
  
  //sinal 2
  digitalWrite(vermelho_2, LOW);
  digitalWrite(amarelo_2, HIGH);
  digitalWrite(verde_2, LOW);

  delay(4000);
 
 
  // sinal 1

  digitalWrite(vermelho_1, LOW);
  digitalWrite(amarelo_1, LOW);
  digitalWrite(verde_1, HIGH);
  
  // sinal 2
  
  digitalWrite(vermelho_2, HIGH);
  digitalWrite(amarelo_2, LOW);
  digitalWrite(verde_2, LOW);
 
  delay(10000);

  //sinal 1 
  digitalWrite(vermelho_1, LOW);
  digitalWrite(amarelo_1, HIGH);
  digitalWrite(verde_1, LOW);
  
  delay(4000);
  
  
}