#define buzzer1 1
#define buzzer2 2
#define buzzer3 3

void setup() {
  pinMode(buzzer1, OUTPUT);
  pinMode(buzzer2, OUTPUT);
  pinMode(buzzer3, OUTPUT);
}

void loop() {
  tone(buzzer1, 2000, 500);
  delay(500);
  tone(buzzer2, 1000, 300);
  delay(500);
  tone(buzzer3, 50, 100);
  delay(300);
}
