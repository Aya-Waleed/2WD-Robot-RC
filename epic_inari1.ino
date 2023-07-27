
int ena=9;
int inp1=8;
int inp2=7;
int inp3=6;
int inp4=5;
int enb=4;

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
for(int i=4;i<=9;i++){
  pinMode(i,OUTPUT);}
  Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    char reading=Serial.read();
     switch(reading){
      case('f'):
  digitalWrite(inp1,HIGH);
  digitalWrite(inp2,LOW);
  digitalWrite(inp3,HIGH);
  digitalWrite(inp4,LOW);
  analogWrite(ena,150);
  analogWrite(enb,150);
  break;
  case('l'): 
  digitalWrite(inp1,0);
  digitalWrite(inp2,0);
  digitalWrite(inp3,0);
  digitalWrite(inp4,1);
  analogWrite(ena,150);
  analogWrite(enb,150);
  break;
  case('r'):
  digitalWrite(inp1,HIGH);
  digitalWrite(inp2,0);
  digitalWrite(inp3,0);
  digitalWrite(inp4,0);
  analogWrite(ena,150);
  analogWrite(enb,150);
  break;
  case('b'):
  digitalWrite(inp1,LOW);
  digitalWrite(inp2,HIGH);
  digitalWrite(inp3,LOW);
  digitalWrite(inp4,HIGH);
  analogWrite(ena,150);
  analogWrite(enb,150);
  break;
  case('s'): 
  digitalWrite(inp1,0);
  digitalWrite(inp2,0);
  digitalWrite(inp3,0);
  digitalWrite(inp4,0);
  analogWrite(ena,150);
  analogWrite(enb,150);
  break;
     }
  }
}