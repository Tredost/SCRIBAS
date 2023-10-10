
void setup() {
  // put your setup code here, to run once:
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(1, 2000, 500);
  delay(500);
  tone(2, 1000, 300);
  delay(500);
  tone(3, 50, 100);
  delay(300);
}
