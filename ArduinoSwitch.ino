int input;

int Fr_pin_0=0;
int Fr_pin_1=1;
int Fr_pin_2=2;
int Fr_pin_3=3;

//fin pines fotoResistencia

int Fr_valor_pin_0=0;
// paso de valor Fr_pin

int Valor_punto_medio =19;


void setup() {
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600); //Se inicia la comunicación serie
}

void loop() {
  if (Serial.available() > 0) {

    input = Serial.read();

      
    if (input == '1'){
      Fr_valor_pin_0=analogRead(Fr_pin_0);
      Serial.println(Fr_valor_pin_0);
      delay(100);
  
  
  if(Fr_valor_pin_0 < Valor_punto_medio){
    digitalWrite(8,HIGH);
  } else {
    digitalWrite(8,LOW);
  }
  //-----------------------------------
  Fr_valor_pin_0=analogRead(Fr_pin_1);
  delay(100);
  if(Fr_valor_pin_0 < Valor_punto_medio){
    digitalWrite(9,HIGH);
    }else{
      digitalWrite(9,LOW);
      }
  //------------------------------------
  Fr_valor_pin_0=analogRead(Fr_pin_2);
  delay(100);
  if(Fr_valor_pin_0 < Valor_punto_medio){
    digitalWrite(10,HIGH);
    }else{
      digitalWrite(10,LOW);
      }
 //--------------------------------------
 Fr_valor_pin_0 =analogRead(Fr_pin_3);
  delay(100);
  if(Fr_valor_pin_0 < Valor_punto_medio){
    digitalWrite(11,HIGH);
    }else{
      digitalWrite(11,LOW);
      }

//------------------------------------------------
  
     }
  }
  
  }



void apagarTodoLed(){
  if (Serial.available() > 0) {

    input = Serial.read();

      
    if (input == '1'){
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
      delay(5000);
     }
  }
  
}  


void encenderTodoLed(){
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  }


  void lecturaSens(){
    analogRead(Fr_pin_0);
    analogRead(Fr_pin_1);
    analogRead(Fr_pin_2);
    analogRead(Fr_pin_0);
    }
