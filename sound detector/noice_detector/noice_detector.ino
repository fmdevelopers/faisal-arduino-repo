

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode (A0, INPUT );
pinMode(5,OUTPUT);


}

void loop() {
  int a;
  a = analogRead(A0);
  Serial.println(a);
  if (a>150)
  {
    digitalWrite(5,HIGH);
    delay(2000);
  }
  else {
    digitalWrite(5,LOW);
  }
  // put your main code here, to run repeatedly:

}
