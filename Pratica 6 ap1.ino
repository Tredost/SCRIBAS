#define led1 5
#define led2 6
#define led3 7
#define chave1 11
#define chave2 12

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(chave1,INPUT);
  pinMode(chave2,INPUT);
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
