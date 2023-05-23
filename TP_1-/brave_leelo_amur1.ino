#define RGB1_R 3

#define RGB2_R 4
#define RGB2_B 7

#define RGB3_B 10
#define RGB3_G 11

void setup() 
{
  pinMode(RGB1_R , OUTPUT);
  
  pinMode(RGB2_R , OUTPUT);
  pinMode(RGB2_B , OUTPUT);
  
  pinMode(RGB3_B , OUTPUT);
  pinMode(RGB3_G , OUTPUT);
}

void loop() 
{
    analogWrite(RGB1_R , 255); 
    delay(1000);
	analogWrite(RGB1_R , LOW);
  	
    digitalWrite(RGB2_R , 255);
    digitalWrite(RGB2_B , 255);
  	delay(1000);
  	digitalWrite(RGB2_R , LOW);
  	digitalWrite(RGB2_B , LOW);

    digitalWrite(RGB3_B , 100);
    analogWrite(RGB3_G , 100);
    delay(1000);
  	analogWrite(RGB3_B , LOW);
  	digitalWrite(RGB3_G , LOW);
  
  
}