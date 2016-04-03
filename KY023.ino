int LED_MINY=8;
int LED_MAXY=9;
int LED_MINX=10;
int LED_MAXX=11;

int LED_PULSADOR=12;

int EJE_Y = A0;
int EJE_X = A1;
int PULSADOR = A2;

int i;

int valorX=0;
int valorY=0;
int valorPulsador=0;

void setup(){
  for(i=8; i<=12; i++){
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
  Serial.begin(9600);
}

void loop(){
  valorX=analogRead(EJE_X);
  valorY=analogRead(EJE_Y);
  valorPulsador = analogRead(PULSADOR);

  Serial.print("X: ");
  Serial.print(valorX);
  Serial.print(" Y: ");
  Serial.print(valorY);
  Serial.print(" Pulsador: ");
  Serial.println(valorPulsador);
  
  if(valorPulsador==0){
    digitalWrite(LED_PULSADOR, HIGH);
  }else{
    digitalWrite(LED_PULSADOR, LOW);
  }

  if(valorX == 0){
    digitalWrite(LED_MINX, HIGH);
  }else if(valorX ==1023 ){
    digitalWrite(LED_MAXX, HIGH);
  }else{
    digitalWrite(LED_MINX, LOW);
    digitalWrite(LED_MAXX, LOW);
  }

  if(valorY == 0){
    digitalWrite(LED_MINY, HIGH);
  }else if(valorY == 1023){
    digitalWrite(LED_MAXY, HIGH);
  }else{
    digitalWrite(LED_MINY, LOW);
    digitalWrite(LED_MAXY, LOW);
  }
  
  delay(500);
}
