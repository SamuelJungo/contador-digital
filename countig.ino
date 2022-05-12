int led = 4;
int led1 = 5;
int led2 = 6;
int led3 = 7;
int led4 = 8;
int led5 = 9;
int led6 = 10;
int andar1 = 11;
int andar2 = 12;
int porta = 13;


void setup() {                
  
  pinMode(led, OUTPUT);  
 pinMode(led1, OUTPUT); 
 pinMode(led2, OUTPUT); 
 pinMode(led3, OUTPUT); 
 pinMode(led4, OUTPUT); 
 pinMode(led5, OUTPUT); 
 pinMode(led6, OUTPUT); 
   pinMode(andar1, INPUT);
  pinMode(andar2, INPUT_PULLUP);
  pinMode(andar1,INPUT_PULLUP);
    Serial.begin(9600);
  
}


void loop() {
   mostrar0();
  delay(1000);
   mostar1();
  delay(1000);
  mostrar2();
  delay(1000);
  mostrar3();
  delay(1000);
  // não terminei de fazer de outros numero espero que consigar terminar este contador
  mostrar8();
   delay(1000);
  mostrar9();
  


   
}
void portaAberta(){
digitalWrite(porta,HIGH);
}
void portafechada(){
digitalWrite(porta,LOW);
}
void mostrar0(){
  //numero zero
  digitalWrite(led, LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW); 
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW); 
  digitalWrite(led6, HIGH);}

void mostrar1(){  //numero 1
   digitalWrite(led, HIGH);
  digitalWrite(led1,HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH); 
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW); 
  digitalWrite(led6, HIGH);}
void mostrar2(){
//numero 2
  digitalWrite(led, LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW); 
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH); 
  digitalWrite(led6, LOW);
}
void mostrar3(){
  //numero 3
  digitalWrite(led, LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW); 
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH); 
  digitalWrite(led6, LOW);
}
void mostrar4(){
// numero 4
   digitalWrite(led,LOW);
  digitalWrite(led1,HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH); 
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH); 
  digitalWrite(led6, LOW);
  delay(1000);
}
void mostrar8(){
  // numero 8
   digitalWrite(led,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW); 
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW); 
  digitalWrite(led6, LOW);
}
void mostrar9(){
 // numero 9
   digitalWrite(led,LOW);
  digitalWrite(led1,HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW); 
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW); 
  digitalWrite(led6, LOW);}
