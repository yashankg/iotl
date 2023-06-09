void setup() {
pinMode(3, OUTPUT);
pinMode(5, OUTPUT);
pinMode(8, OUTPUT);
pinMode(10, INPUT);
}
void loop() {
int hasObstacle = digitalRead(10);
if (hasObstacle == 1) {
digitalWrite(3, HIGH);
digitalWrite(5, LOW);
digitalWrite(8, HIGH);
}
else {
digitalWrite(5, HIGH);
digitalWrite(3 , LOW);
digitalWrite(8  , LOW);
}
delay(200);
}



Const int red=3;
Const int green=5;

Void setup()
{
	pinMode(red, OUTPUT);
	pinMode(green, OUTPUT);
	pinMode(10, INPUT);
}
Void loop()
{
	Int obstacle = digitalRead(10);
	If( obstacle==1 )
	{
		digitalWrite(red, HIGH);
		digitalWrite(green, LOW);
	}
	Else
	{
		digitalWrite(red, LOW);
		digitalWrite(green, HIGH);
	}
	Delay(200);

}
