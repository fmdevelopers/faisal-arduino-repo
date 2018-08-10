void setup() {
  // put your setup code here, to run once:
  pinMode (A0,INPUT);
  pinMode(A5,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
int a = analogRead(A0);
int b = analogRead(A5);
  Serial.println(a );
  Serial.println(b);
  Serial.println("-----------");
  delay(100);
if ( a<500)
{
  Serial.println("Low");
  }
else if (a>=500 and a<620)
{
    Serial.println("Mild");
  }
  else if(a>=620)
{
    Serial.println("High");
  }

if ( b<500)
{
  Serial.println("Low");
  }
else if (b>=500 and b<620)
{
    Serial.println("Mild");
  }
  else if(b>=620)
{
    Serial.println("High");
  }

}
