const int Rele1=7;
const int Rele2=6;
int botao = 5;
int botao2 = 4;
int estadobotao;
int estadobotao2;
void setup() {
pinMode(Rele1, OUTPUT);
pinMode(Rele2, OUTPUT);
pinMode(botao ,INPUT);
pinMode(botao2 ,INPUT);

}

void loop() {
  estadobotao= digitalRead(botao);
  estadobotao2= digitalRead(botao2);
  
  if (estadobotao==0){ 
  digitalWrite(Rele1, HIGH);
  }if (estadobotao2==0){
  digitalWrite(Rele2, HIGH);
  }if(estadobotao==1 ){
    digitalWrite(Rele1, LOW);
  }if(estadobotao2==1 ){
    digitalWrite(Rele2, LOW);
  }
  
}
