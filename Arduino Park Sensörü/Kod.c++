void setup()
{
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,INPUT);
  pinMode(9,OUTPUT);
}

void loop()
{
  digitalWrite(6,1); delay(1);
  digitalWrite(6,0);
  int sure=pulseIn(7,1);
  int mesafe=(sure/2)/28.97;
  Serial.print("Olculen Mesafe=");
  Serial.println(mesafe);
  delay(500);
  if (mesafe<10) 
  {
    digitalWrite(9,1); 
  }
  else
  {
    digitalWrite(9,0);
  } 
  if (mesafe>=10) 
  {
    digitalWrite(2,1);
  }
  else
  {
    digitalWrite(2,0);
  }
  if (mesafe>=20) 
  {
    digitalWrite(3,1);
  }
  else
  {
    digitalWrite(3,0);
  }
  if (mesafe>=30) 
  {
    digitalWrite(4,1);
  }
  else
  {
    digitalWrite(4,0);
  }
  if (mesafe>=40) 
  {
    digitalWrite(5,1);
  }
  else
  {
    digitalWrite(5,0);
  } 
}