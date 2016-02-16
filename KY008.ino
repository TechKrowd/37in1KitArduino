int PULSADOR=2;
int LASER=3;

void setup(){
  pinMode(PULSADOR, INPUT);
  pinMode(LASER, OUTPUT);
  digitalWrite(LASER, LOW);
}

void loop(){
  while(digitalRead(PULSADOR)==LOW);
  digitalWrite(LASER, HIGH);
  while(digitalRead(PULSADOR)==HIGH);
  digitalWrite(LASER, LOW);

  //digitalWrite(LASER, digitalRead(PULSADOR));
}
