// C++ code
//
///cristian c++
int led1=13;
int time_delay=1000;
void setup()
{
  pinMode(led1,OUTPUT);
}

void loop()
{
  digitalWrite(led1,HIGH);///high encender. low apagar
  delay(time_delay);/// 1segundo a 1000
  digitalWrite(led1,LOW);
  delay(time_delay);
  
}