int Photores = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);

  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  Photores = analogRead(A0);
  Serial.println(Photores);
  analogWrite(9, map(Photores, 0, 1023, 0, 255));
  analogWrite(10, map(Photores, 0, 1023, 0, 255));
  analogWrite(11, map(Photores, 0, 1023, 0, 255));
  delay(100); // Wait for 100 millisecond(s)
}