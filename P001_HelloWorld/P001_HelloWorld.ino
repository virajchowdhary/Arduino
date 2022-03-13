int val;

void setup() 
{ 
  Serial.begin(9600);
} 

void loop() 
{
  val=Serial.read();
  if(val=='V' || val=='v')
  {    
    Serial.println("Hello World");
  }
}
