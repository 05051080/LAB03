/*3-2*/
double Analogin = 0;
double vin = 0;
void setup() 
{
  pinMode(14,INPUT);
  Serial.begin(9600);

}
void loop() 
{
 
  for(int i=0;i<=5;i++)
  Analogin = (0.7*Analogin) + (0.3*analogRead(14));
 vin  = (Analogin*2.5)/4095;
 
Serial.print(Analogin);
  Serial.print(vin);
 delay(1000);
}
