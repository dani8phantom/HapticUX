void setup()
{
  Serial.begin(9600);
  pinMode(3, OUTPUT); 
}

void loop()
{
 while(!Serial.available());  
 analogWrite(3, Serial.read());
}
