#define Led1_R 9
#define Led1_B 10
#define Led1_G 11
#define Led2_R 2
#define Led2_B 3
#define Led2_G 4
#define Led3_R 5
#define Led3_B 6
#define Led3_G 7
#define boton 12
int pot=A0;
int potVal;
int mov;

void setup()
{
  pinMode( Led1_R, OUTPUT);
  pinMode( Led1_G, OUTPUT);
  pinMode( Led1_B, OUTPUT);
  pinMode( Led2_R, OUTPUT);
  pinMode( Led2_G, OUTPUT);
  pinMode( Led2_B, OUTPUT);
  pinMode( Led3_R, OUTPUT);
  pinMode( Led3_G, OUTPUT);
  pinMode( Led3_B, OUTPUT);
  pinMode( boton, INPUT);
  Serial.begin(9600);
}

void loop()
{
  potVal=analogRead(pot);
  mov=map(potVal,0,1023,250,500);
  Serial.println(mov);
  
  if(digitalRead(boton)==LOW)
  {
    analogWrite(Led1_R,0);
    digitalWrite (Led2_R , LOW);
    digitalWrite (Led2_B ,LOW);
    analogWrite (Led3_B,0);
    analogWrite (Led3_G,0);
  }else{
  analogWrite (Led1_R , 255);
  delay(mov);
  analogWrite(Led1_R,0);
  delay(mov);
  digitalWrite (Led2_R , HIGH);
  digitalWrite (Led2_B ,HIGH);
  delay(mov);
  digitalWrite (Led2_R , LOW);
  digitalWrite (Led2_B ,LOW);
  delay(mov);
  analogWrite (Led3_B,50);
  analogWrite (Led3_G,50);
  delay(mov);
  analogWrite (Led3_B,0);
  analogWrite (Led3_G,0);
  delay(mov);
  }
}