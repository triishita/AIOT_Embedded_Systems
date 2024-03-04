void setup()
{
  Serial.begin(9600);
  pinMode(A0,INPUT);
}

void loop()
{
  int temp = analogRead(A0);
  Serial.println(temp);
}