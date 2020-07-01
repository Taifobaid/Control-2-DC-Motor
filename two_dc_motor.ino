const int leftfor = 2;
const int leftback = 3;
const int rightfor = 4;
const int rightback =5;


void setup()
{
  pinMode (leftfor,OUTPUT);
  pinMode (leftback,OUTPUT);
  pinMode (rightfor,OUTPUT);
  pinMode (rightback,OUTPUT);
}

void loop()
{
  digitalWrite(leftfor,HIGH);
  digitalWrite(leftback,LOW);
  digitalWrite(rightfor,HIGH);
  digitalWrite(rightback,LOW);
}
