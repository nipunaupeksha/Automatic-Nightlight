//Automatic Nightlight
const int RLED = 9; //Red LED on pin 9
const int LIGHT = 0;//Light sensor on analog pin 0
const int MIN_LIGHT = 200; //Minimum expected light value
const int MAX_LIGHT = 900; //variable to hold the analog reading
int val = 0; 
void setup() {
  pinMode(RLED,OUTPUT);

}

void loop() {
  val = analogRead(LIGHT); //Read the light sensor
  val = map(val,MIN_LIGHT,MAX_LIGHT,255,0); //Map light reading
  val = constrain(val,0,255); //constrain light value
  analogWrite(RLED,val); //control the LED
}
