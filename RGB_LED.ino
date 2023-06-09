int red_light_pin= 3;
int green_light_pin = 5;
int blue_light_pin = 6;

unsigned int red,green,blue;

void setup() {
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);
}

void loop() {
 

  RGB_color(255-red, 255-green, 255-blue); // Red
  delay(1000);
  digitalWrite (red_light_pin, LOW);
  delay(1000);
  digitalWrite (red_light_pin, HIGH);
  delay(500);
  digitalWrite (green_light_pin, LOW);
  delay(1000);
  digitalWrite (green_light_pin, HIGH);
  delay(500);
  digitalWrite (blue_light_pin, LOW);
  delay(1000);
  digitalWrite (blue_light_pin, HIGH);
  delay(500);
}

void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
 {
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}




/*
Const int redpin =3;
Const int greenpin =5;
Const int bluepin =6;

Unsigned int red, green, blue;
Void setup()
{
	pinMode(redpin, OUTPUT);
	pinMode(greenpin, OUTPUT);
	pinMode(bluepin, OUTPUT);
}
Void loop()
{
	RGB_color(255-red, 255-green, 255-blue);
	degitalWrite(redpin, HIGH);
	delay(1000);
	degitalWrite(redpin, LOW);
	delay(1000);
	degitalWrite(greenpin, HIGH);
	delay(1000);
	degitalWrite(greenpin, LOW);
	delay(1000);
	degitalWrite(bluepin, HIGH);
	delay(1000);
	degitalWrite(bluepin, LOW);
	delay(1000);
}
Void RGB_color(int redvalue, int greenvalue, int bluevalue)
{
	analogWrite(redpin, redvalue);
	analogWrite(greenpin, greenvalue);
	analogWrite(bluepin, bluevalue);
}

*/
