int LED1 = 9; //define led sequance
int LED2 = 10;

void setup ()//for output setup
{
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
}

void loop ()//looping 
{
  digitalWrite(LED1,HIGH);//for on
  digitalWrite(LED2,HIGH);
  delay(2000);// time delay in ms
  digitalWrite(LED1,LOW);//for off
  digitalWrite(LED2,LOW);
  delay(1000);
}
