const int led = 13;
void setup()
{
pinMode(led , OUTPUT);
Serial.begin(9600);
}
void loop() 
{
if(Serial.available()>0)
{
  char incomingByte = Serial.read();
  if(incomingByte == 'H' || incomingByte == 'h')  
  {
  digitalWrite(led , HIGH);    
  }
    else if(incomingByte == 'L' || incomingByte == 'l')  
  {  
  digitalWrite(led , Low);
  }

}
}
