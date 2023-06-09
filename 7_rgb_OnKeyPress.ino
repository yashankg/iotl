char ch;
void setup()
{
 pinMode(3, OUTPUT);
 pinMode(5, OUTPUT);
 pinMode(6, OUTPUT);
 Serial.begin(9600);
}
void loop()
{
 if(Serial.available()){
 ch=Serial.read();
 }
 if(ch=='R'|| ch=='r'){
 digitalWrite(3, LOW);
 digitalWrite(5, HIGH);
 digitalWrite(6, HIGH);
 }
 else if(ch=='G'||ch=='g'){
 digitalWrite(5, LOW);
 digitalWrite(6, HIGH);
 digitalWrite(3, HIGH);
 }
 else if(ch=='B'||ch=='b'){
 digitalWrite(6, LOW);
 digitalWrite(5, HIGH);
 digitalWrite(3, HIGH);
 }
 else{
 digitalWrite(6, LOW);
 digitalWrite(5, LOW);
 digitalWrite(3, LOW);
 }
}



Const int red=3;
Const int green=5;
Const int blue=6;

Const chat ch;

Void setup()
{
	pinMode(red, OUTPUT);
	pinMode(green, OUTPUT);
	pinMode(blue, OUTPUT);
	Serial.begin(9600);
}
Void loop()
{
	If(Serial.available())
	{
		Ch=Serial.read();
	}
	If(ch==’r’ || ch==’R’)
	{
		digitalWrite(red, HIGH);
		digitalWrite(green, LOW);
		digitalWrite(blue, LOW);
	}
	Else If(ch==’g’ || ch==’G’)
	{
		digitalWrite(green, HIGH);
		digitalWrite(red, LOW);
		digitalWrite(blue, LOW);
	}
	Else If(ch==’b’ || ch==’B’)
	{
		digitalWrite(blue, HIGH);
		digitalWrite(green, LOW);
		digitalWrite(red, LOW);
	}
	Else()
	{
		digitalWrite(blue, HIGH);
		digitalWrite(green, HIGH);
		digitalWrite(red, HIGH);
	}

}
