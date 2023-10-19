#define buzzer1 9
#define buzzer2 10
#define buzzer3 11
#define entrada1 2
#define entrada2 3
#define entrada3 4
#define entrada4 5

void setup() {
  Serial.begin(9600); // Inicializa a comunicação serial
  pinMode(entrada1, INPUT);
  pinMode(entrada2, INPUT);
  pinMode(entrada3, INPUT);
  pinMode(entrada4, INPUT);
  pinMode(buzzer1, OUTPUT);
  pinMode(buzzer2, OUTPUT);
  pinMode(buzzer3, OUTPUT);
}

void loop() {
  while (digitalRead(entrada1) == 1) {

  int estado1 = digitalRead(entrada2);
  int estado2 = digitalRead(entrada3);
  int estado3 = digitalRead(entrada4);

  int valorBinario = (estado1 << 2) | (estado2 << 1) | estado3;

  Serial.println(valorBinario, BIN);


  switch (valorBinario) {
    case 0:
    playMusica1();
    break;

    case 1:
    playMusica2();
    break;

    case 2:
    playMusica3();
    break;

    case 3:
    playMusica4();
    break;

    case 4:
    playMusica5();
    break;

    case 5:
    playMusica6();
    break;

    case 6:
    playMusica7();
    break;

    case 7:
    playMusica8();
    break;
  }

  delay(1000);
  }
}

void playMusica1() {
  int melodia[] = {262, 294, 330, 349, 392, 440, 494, 523, 262, 294, 330, 349, 392, 440, 494, 523, 262, 294, 330,};
  int duracaoNotas[] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};

  for (int i = 0; i < 19; i++) {
    tone(buzzer, melodia[i]);
    delay(500 / duracaoNotas[i]);
    noTone(buzzer);
    delay(50);
  }
}

void playMusica2() {
  int melodia[] = {262, 262, 294, 262, 349, 330, 262, 262, 294, 262, 392, 349, 262, 262, 523, 440, 349, 330, 294, 466, 466, 440, 349, 392, 349};
  int duracaoNotas[] = {4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2};

  for (int i = 0; i < 25; i++) {
    tone(buzzer, melodia[i]);
    delay(500 / duracaoNotas[i]);
    noTone(buzzer);
    delay(50);
  }
}

void playMusica3() {
  int melodia[] = {392, 349, 330, 294, 523, 392, 349, 330, 294, 523, 392, 349, 330, 349, 330, 294, 523, 392, 349, 330, 294, 349, 330, 294, 261, 294, 330, 349};
  int duracaoNotas[] = {8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 4, 8, 8, 4};

  for (int i = 0; i < 27; i++) {
    tone(buzzer, melodia[i]);
    delay(500 / duracaoNotas[i]);
    noTone(buzzer);
    delay(50);
  }
}

void playMusica4() {
  int melodia[] = { 233, 233, 262, 311, 233, 233, 262, 311, 349, 311, 349, 392, 349, 311, 349, 311, 262, 294, 262, 294, 233, 262, 233, 262, 196 };
  int duracaoNotas[] = { 4, 4, 4, 4, 8, 4, 4, 4, 8, 4, 4, 4, 8, 4, 4, 4, 4, 4, 4, 4, 8, 4, 4, 4, 8 };

  for (int i = 0; i < 25; i++) {
    tone(buzzer, melodia[i]);
    delay(500 / duracaoNotas[i]);
    noTone(buzzer);
    delay(50);
  }
}

void playHinoBahia() {
  int melodia[] = {262, 294, 330, 349, 392, 440, 494, 523, 587, 659, 698, 784};
  int duracaoNotas[] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};

  for (int i = 0; i < 12; i++) {
    tone(buzzer, melodia[i]);
    delay(500 / duracaoNotas[i]);
    noTone(buzzer);
    delay(50);
  }
}

