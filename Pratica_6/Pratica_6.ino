#define led1 47
#define led2 49
#define led3 51
#define chave1 31
#define chave2 33

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(chave1, INPUT);
  pinMode(chave2, INPUT);
}

void loop() {
  if (digitalRead(chave1) == 0 and digitalRead(chave2) == 0) {
    digitalWrite(led1, 1);
    digitalWrite(led2, 1);
    digitalWrite(led3, 1);
  }

  if (digitalRead(chave1) == 1 and digitalRead(chave2) == 0) {
    digitalWrite(led1, 1);
    digitalWrite(led2, 0);
    digitalWrite(led3, 0);
  }

  if (digitalRead(chave1) == 0 and digitalRead(chave2) == 1) {
    digitalWrite(led1, 0);
    digitalWrite(led2, 1);
    digitalWrite(led3, 0);
  }

  if (digitalRead(chave1) == 1 and digitalRead(chave2) == 1) {
    digitalWrite(led1, 0);
    digitalWrite(led2, 0);
    digitalWrite(led3, 0);
  }
}
