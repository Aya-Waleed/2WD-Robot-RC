const byte pins[4]={5,6,7,8};
byte j[3]={
  0b1010,
  0b0000,
  0b0101
};
int ena=9;
int enb=3;

void setup() {
  // put your setup code here, to run once:
  for(int i=4;i<=8;i++){
  pinMode(i,OUTPUT);}
  pinMode(9,OUTPUT);
  pinMode(3,OUTPUT);
  analogWrite(3,150);
  analogWrite(9,150);
}
void loop(){ 
  for(byte i=0;i<4;i++){
   digitalWrite(pins[i],0b1010&0b0001<<i);
  } delay(1000);
  for(byte i=0;i<4;i++){
   digitalWrite(pins[i],0b0000&0b0001<<i);
  } delay(500);
  for(byte i=0;i<4;i++){
   digitalWrite(pins[i],0b0101&0b0001<<i);
  } delay(1000);
 
}