/*3-1*/
char val;
const byte led = 13;
void setup() {

Serial.begin(9600);
Serial.println("Hello World,");
Serial.print("\tLED pin is: ");
Serial.print(led);
Serial.print("\n");


}

void loop() {
  if(Serial.available() )
  {
   val = Serial.read(); 
 
    if(val == '1'){
      digitalWrite(led, HIGH);
      Serial.print("LED ON");
    }
    else if (val == '0' )
    {
      digitalWrite(led, LOW);
      Serial.print("LED OFF");  
    }   
    }
}void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
