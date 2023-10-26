int led_Red=13;
int led_Yellow=12;
int led_Green=11;

int time_delay=2000;
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(led_Red, HIGH);
  delay (time_delay); 
  digitalWrite(led_Red, LOW);
  digitalWrite(led_Yellow, HIGH);
  delay (time_delay); 
  digitalWrite(led_Yellow, LOW);
  digitalWrite(led_Green, HIGH);
  delay (time_delay); 
  digitalWrite(led_Green, LOW);
  digitalWrite(led_Yellow, HIGH);
  delay (time_delay); 
  digitalWrite(led_Yellow, LOW);
}
