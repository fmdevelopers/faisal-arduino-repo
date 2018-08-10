
int t = 10;
int e = 9;
int red = 6;
int green =5;
int blue = 4;


void setup() {
  pinMode(t, OUTPUT);
  pinMode(e, INPUT);
  Serial.begin(9600);
  
   // put your setup code here, to run once:

}
int a;
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(t,HIGH);
delayMicroseconds(2);
digitalWrite(t,LOW);
delayMicroseconds(10);
digitalWrite(t,HIGH);

long duration = pulseIn (e,HIGH);

long cm = duration/29/2;

Serial.println(cm);

if (cm<10)
{
  digitalWrite(blue,LOW);
  digitalWrite(green,LOW);
  digitalWrite(red,HIGH);
  delay(200);
}
else if (cm>=10 and cm<=20)
{
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  digitalWrite(blue,HIGH);
  delay(200);
}
else
{
  digitalWrite(blue,LOW);
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  delay(200);
}
  }

