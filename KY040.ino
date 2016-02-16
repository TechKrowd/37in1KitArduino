int CLK=2;
int DT=3;
int LED=5;

int anteriorCLK;
int valorCLK;
int valorDT;
int cont;

void setup(){
  pinMode(LED, OUTPUT);

  pinMode(CLK, INPUT);
  pinMode(DT, INPUT);
  digitalWrite(LED, LOW);
  anteriorCLK=digitalRead(CLK);
  cont=0;
}

void loop(){
  valorCLK=digitalRead(CLK);
  if(valorCLK!=anteriorCLK){
    valorDT=digitalRead(DT);
    if(valorDT==valorCLK){ //derecha
      cont++;
      if(cont>255){
        cont=0;
      }
    }else{ //izquierda
      cont--;
      if(cont<0){
        cont=255;
      }
    }
    analogWrite(LED,cont);
    anteriorCLK=valorCLK;
  }
}


