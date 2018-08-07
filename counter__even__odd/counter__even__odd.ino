int a = 7;
int b = 6;
int c = 4;
int d = 2;
int e = 1;
int f = 9;
int g = 10;


void setup() {
  // put your setup code here, to run once:
  pinMode (1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode (3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode (7,OUTPUT);
  pinMode(8,OUTPUT);
 pinMode (9,OUTPUT);
  pinMode(10,OUTPUT); 
}

void one (){


    digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
}
void two (){


    digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(d,HIGH);
  
  
}



void three (){


    digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  
  
}

void four (){


    digitalWrite(f,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
   
}


void five (){


    digitalWrite(a,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
}

void six (){


    digitalWrite(a,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
}
void seven (){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
}
void eight (){


  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  
}
void nine (){


  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  
}
void zero (){

  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  
}

void low(){
digitalWrite(a,LOW);
digitalWrite(b,LOW);
digitalWrite(c,LOW);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(f,LOW);
digitalWrite(g,LOW);

  
}
/*
void one (){
   digitalWrite(6,HIGH);
  digitalWrite(4,HIGH);
}

void one (){
  digitalWrite(6,HIGH);
  digitalWrite(4,HIGH);
}

void one (){
   digitalWrite(6,HIGH);
  digitalWrite(4,HIGH);
}


void one (){
    digitalWrite(6,HIGH);
  digitalWrite(4,HIGH);
}

void one (){
  digitalWrite(6,HIGH);
  digitalWrite(4,HIGH);
}

void one (){
   digitalWrite(6,HIGH);
  digitalWrite(4,HIGH);
}

void one (){
    digitalWrite(6,HIGH);
  digitalWrite(4,HIGH);
}
*/


void counter(){
 zero();
 delay (1000);
low();
  delay (1000);
 one();
  delay (1000);
low();
  delay (1000);
 two();
  delay (1000);
low();
  delay (1000);
three();  
  delay (1000);
low();
  delay (1000);
  four();
delay (1000);
low();
  delay (1000);
five();
delay (1000);
low();
  delay (1000);
  six();
  delay (1000);
low();
  delay (1000);
  seven();
  delay (1000);
low();
  delay (1000);
  eight();
  delay (1000);
low();
  delay (1000);
  nine();
  delay (1000);
low();
  delay (1000); 
}

void even()

{
 zero();
 delay (1000);
low();
  delay (1000);
 two();
  delay (1000);
low();
  delay (1000);
  four();
delay (1000);
low();
  delay (1000);
  six();
  delay (1000);
low();
  delay (1000);
  eight();
  delay (1000);
low();
  delay (1000);
  
}
void odd()
{
  
 one();
  delay (1000);
low();
  delay (1000);
three();  
  delay (1000);
low();
  delay (1000);
five();
delay (1000);
low();
  delay (1000);
  seven();
  delay (1000);
low();
  delay (1000);
  nine();
  delay (1000);
low();
  delay (1000);
}

void hexa()
{
   zero();
 delay (1000);
low();
  delay (1000);
 one();
  delay (1000);
low();
  delay (1000);
 two();
  delay (1000);
low();
  delay (1000);
three();  
  delay (1000);
low();
  delay (1000);
  four();
delay (1000);
low();
  delay (1000);
five();
delay (1000);
low();
  delay (1000);
  six();
  delay (1000);
low();
  delay (1000);
  seven();
  delay (1000);
low();
  delay (1000);
  eight();
  delay (1000);
low();
  delay (1000);
  nine();
  delay (1000);
low();
  delay (1000); 
  
  }
void loop() {
  // put your main code here, to run repeatedly:
even();
  
}
