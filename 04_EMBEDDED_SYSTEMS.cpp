void setup()
{
  Serial.begin(9600);
  pinMode(A0,INPUT);
}

void loop()
{
  int temp = analogRead(A0);
  temp = map(temp, 20, 358, -40, 125);
  Serial.println(temp);
}