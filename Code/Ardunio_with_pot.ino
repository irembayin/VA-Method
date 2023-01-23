const int gate = 13;
int Duty = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(gate, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(gate, HIGH);
  delayMicroseconds(Duty);
  digitalWrite(gate, LOW);
  delayMicroseconds(1050-Duty);
  Duty = analogRead(A3);

}
