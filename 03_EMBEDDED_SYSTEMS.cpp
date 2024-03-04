void setup()
{
  Serial.begin(9600);
  pinMode(A0,INPUT);
}

void loop()
{
  int temp = analogRead(A0);
  Serial.println(temp); //max temp is 125{output:358) and min temp is -40(output:20)
}
