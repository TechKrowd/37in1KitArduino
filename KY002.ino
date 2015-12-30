int LED=13;
int SENSOR=10;

void setup(){
  pinMode(LED,OUTPUT);
  pinMode(SENSOR, INPUT);
  digitalWrite(LED, LOW);
}

void loop(){
  digitalWrite(LED, !digitalRead(SENSOR));
  /*if(digitalRead(SENSOR)==LOW){
    digitalWrite(LED, HIGH);
  }else{
    digitalWrite(LED, LOW);
  }*/
}
