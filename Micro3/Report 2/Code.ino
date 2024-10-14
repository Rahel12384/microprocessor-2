const int led = 13;
void setup()
{
pinMode(led , OUTPUT);
Serial.begin(9600);
}
void loop()
{
if(Serial.available() > 0)
{
String incomingByte = Serial.readString();
if(incomingByte == 'H' || incomingByte == "on")
{
digitalWrite(led , HIGH);
}
else if(incomingByte == "off")
{
digitalWrite(led , Low); 
}
}
}
