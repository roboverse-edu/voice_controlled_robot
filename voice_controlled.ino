#define en1 5
#define en2 6
#define in1 7
#define in2 8
#define in3 9
#define in4 10
String readvoice;
const int buzzer = 11;
void setup() {
Serial.begin(9600);
pinMode(buzzer, OUTPUT);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(en1, OUTPUT);
pinMode(en2, OUTPUT);
digitalWrite(en1, HIGH);
digitalWrite(en2, HIGH);
}
 
void loop() {
while (Serial.available())
{
delay(3);
char c = Serial.read();
readvoice += c;
}
 
if(readvoice.length())
{
Serial.println(readvoice);
Serial.println(Serial.available());
if(readvoice == "move forward")
{

digitalWrite(in1, LOW);
digitalWrite(in2, HIGH);
digitalWrite(in3, LOW);
digitalWrite(in4, HIGH);
tone(buzzer, 1000); // Send 1KHz sound signal...
delay(2000); 
noTone(buzzer);     // Stop sound...
delay(1000);        // ...for 1sec
}
 
if(readvoice == "move backward")
{
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);
tone(buzzer, 900); // Send 1KHz sound signal...
delay(2000);// ...for 1 sec
noTone(buzzer);     // Stop sound...
delay(1000);        // ...for 1sec
}
 
if(readvoice == "turn left")
{

digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, HIGH);
delay(1500);
digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);

tone(buzzer, 800); // Send 1KHz sound signal...
delay(1500); 
noTone(buzzer);     // Stop sound...
delay(1000);        // ...for 1sec
}
 
if(readvoice == "turn right")
{

digitalWrite(in1, LOW);
digitalWrite(in2, HIGH);
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);
delay(1500);
digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);

tone(buzzer, 800); // Send 1KHz sound signal...
delay(1500); 
noTone(buzzer);     // Stop sound...
delay(1000);        // ...for 1sec
}
 
if(readvoice == "stop")
{
digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);

tone(buzzer, 1000); // Send 1KHz sound signal...
delay(2000);
noTone(buzzer);     // Stop sound...
delay(1000);        // ...for 1sec
}
if(readvoice == "hello robot")
{
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);
delay(300);
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);
delay(500);
digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);
delay(500);

digitalWrite(in1, LOW);
digitalWrite(in2, HIGH);
digitalWrite(in3, LOW);
digitalWrite(in4, HIGH);
delay(300);
digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);

tone(buzzer, 500); // Send 1KHz sound signal...
delay(100); 
tone(buzzer, 1000); // Send 1KHz sound signal...
delay(100);// ...for 1 sec
tone(buzzer, 400); // Send 1KHz sound signal...
delay(100); 
tone(buzzer, 1000); // Send 1KHz sound signal...
delay(100);// ...for 1 sec
tone(buzzer, 500); // Send 1KHz sound signal...
delay(100); 
tone(buzzer, 1000); // Send 1KHz sound signal...
delay(100);// ...for 1 sec
noTone(buzzer);     // Stop sound...
delay(1000);        // ...for 1sec
}
}
readvoice="";
}
