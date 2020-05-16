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

void loop(){
  if(Serial.available() > 0){
    input = Serial.read();
  }
  if(input == '1'){
    leerSensor(Fr_pin_0,8);
    leerSensor(Fr_pin_1,9);
    leerSensor(Fr_pin_2,10);
    leerSensor(Fr_pin_3,11);
  }else if(input == '0'){
    apagarTodoLed()
  }
}

void leerSensor(int n_pin_read, int n_pin_write){
    Fr_valor_pin_0 = analogRead(n_pin);
    if(Fr_valor_pin_0 < Valor_punto_medio){
      digitalWrite(n_pin_write,HIGH);
    } else {
      digitalWrite(n_pin_write,LOW);
    }
}

void apagarTodoLed(){
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    delay(5000); 
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
