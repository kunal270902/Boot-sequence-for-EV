int b=0;
int n=0;
int r=0;
int acc,reval=0;
bool engg = 0;
void setup()
{
pinMode(12,OUTPUT);
pinMode(4,OUTPUT);
pinMode(10,OUTPUT);
pinMode(A0,INPUT); 
pinMode(A2,INPUT);
pinMode(A4,INPUT);
pinMode(A5,INPUT);
digitalWrite(4,HIGH);
digitalWrite(12,HIGH);
digitalWrite(10,HIGH);
Serial.begin(9600);
}

void loop()
{
  n=analogRead(A5);
  b=analogRead(A4);
  r=analogRead(A2);
  acc=analogRead(A0);
  Serial.println(".............");
  Serial.println(n);
  Serial.println(b);
  Serial.println(r);
  Serial.println(acc);
 if(n==0&&b==0&&acc<100&&engg==0&&r!=0)
  {
    digitalWrite(4,LOW);
    delay(2000);
    digitalWrite(4,HIGH);
    digitalWrite(12,LOW);
    engg = 1;
    reval=1;
    Serial.println('ONNNNNNNNNNNNNNNNNNNNNNNN');
  }
  if(reval==1){
  if(r<10)
  {
    digitalWrite(10,LOW);
  }

  if(r>10)
  {
    digitalWrite(10,HIGH);
  }
  }

  delay(500);
}
