/*
 Pulsador Timbre
 Sistema para controlar un zumbador con un pulsador
 Hardware: 
 Pulsador pin 2
 Zumbador de tipo pasivo pin 11
 Jose Pujol
 */

// constantes que no cambian se usan para establecer los pines
const int buttonPin = 2;     // el numero del pin del pulsador
const int buzzerPin =  11;   // el numero de pin del zumbador

// variables que cambian
int buttonState = 0;       // variable para almacenar el estado del pulsador

void setup() {
  // inicializa el pulsador como entrada
  pinMode(buttonPin, INPUT);
}

void loop() {
  
  // lee el estado del pulsador y lo almacena en la variable
  buttonState = digitalRead(buttonPin);

  // revisa si el pulsador esta presionado
  if (buttonState == HIGH) {
    analogWrite(buzzerPin, 128);      // activa el zumbador
  }
  // si no esta presionado
  else {
    analogWrite(buzzerPin, 0);     // apaga el zumbador
  }
}
