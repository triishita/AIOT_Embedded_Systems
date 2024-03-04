//C++ code to print Hello world
void setup()
{
  Serial.begin(9600); //9600 is baud rate
  //Baud rate=Maximum oscillation rate of an electronic signal
}

void loop()
{
  Serial.print("Hello World"); //this prints the final output
  //use println to print in different line
}
