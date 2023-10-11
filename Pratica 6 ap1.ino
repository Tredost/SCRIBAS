void setup() {
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(11,INPUT);
  pinMode(12,INPUT);
}

void loop() {
  if (digitalRead(11) == 0 and digitalRead(12) == 0) {
    digitalWrite(5, 1);
    digitalWrite(6, 1);
    digitalWrite(7, 1);
  }

  if (digitalRead(11) == 1 and digitalRead(12) == 0) {
    digitalWrite(5, 1);
    digitalWrite(6, 0);
    digitalWrite(7, 0);
  }

  if (digitalRead(11) == 0 and digitalRead(12) == 1) {
    digitalWrite(5, 0);
    digitalWrite(6, 1);
    digitalWrite(7, 0);
  }

  if (digitalRead(11) == 1 and digitalRead(12) == 1) {
    digitalWrite(5, 0);
    digitalWrite(6, 0);
    digitalWrite(7, 0);
  }

}
