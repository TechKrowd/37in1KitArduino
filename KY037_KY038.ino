const int LED=13;
const int SENSOR=2;

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(SENSOR, INPUT);  
}

void loop(){
  while(digitalRead(SENSOR)==LOW);
  digitalWrite(LED, !digitalRead(LED)); 
  while(digitalRead(SENSOR)==HIGH); 
}
