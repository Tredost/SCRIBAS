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
    playToque();
    break;

    case 1:
    playParabens();
    break;

    case 2:
    playAquarela();
    break;

    case 3:
    playParanoid();
    break;

    case 4:
    playHinoBahia();
    break;

    case 5:
    playMusicaCasamento();
    break;

    case 6:
    playWeWillRockYou();
    break;

    case 7:
    playSonatinaCMaior();
    break;
  }

  delay(1000);
  }
}


void playToque() {
  int melodia[] = {262, 294, 330, 349, 392, 440, 494, 523, 262, 294, 330, 349, 392, 440, 494, 523, 262, 294, 330,};
  int duracaoNotas[] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};

  for (int i = 0; i < 19; i++) {
    tone(buzzer1, melodia[i]);
    delay(500 / duracaoNotas[i]);
    noTone(buzzer1);
    delay(50);
  }
}

void playParabens() {
  int melodia[] = {262, 262, 294, 262, 349, 330, 262, 262, 294, 262, 392, 349, 262, 262, 523, 440, 349, 330, 294, 466, 466, 440, 349, 392, 349};
  int duracaoNotas[] = {4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2};

  for (int i = 0; i < 25; i++) {
    tone(buzzer2, melodia[i]);
    delay(500 / duracaoNotas[i]);
    noTone(buzzer2);
    delay(50);
  }
}

void playAquarela() {
  int melodia[] = {392, 349, 330, 294, 523, 392, 349, 330, 294, 523, 392, 349, 330, 349, 330, 294, 523, 392, 349, 330, 294, 349, 330, 294, 261, 294, 330, 349};
  int duracaoNotas[] = {8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 4, 8, 8, 4};

  for (int i = 0; i < 27; i++) {
    tone(buzzer3, melodia[i]);
    delay(500 / duracaoNotas[i]);
    noTone(buzzer3);
    delay(50);  
  }
}

void playParanoid() {
  int melodia[] = { 233, 233, 262, 311, 233, 233, 262, 311, 349, 311, 349, 392, 349, 311, 349, 311, 262, 294, 262, 294, 233, 262, 233, 262, 196 };
  int duracaoNotas[] = { 4, 4, 4, 4, 8, 4, 4, 4, 8, 4, 4, 4, 8, 4, 4, 4, 4, 4, 4, 4, 8, 4, 4, 4, 8 };

  for (int i = 0; i < 25; i++) {
    tone(buzzer1, melodia[i]);
    delay(500 / duracaoNotas[i]);
    noTone(buzzer1);
    delay(50);
  }
}

void playHinoBahia() {
  int melodia[] = { 349, 349, 392, 440, 392, 349, 330, 294, 294, 330, 349, 349, 330, 330, 349, 349, 392, 440, 392, 349, 330, 294, 294, 330 };
  int duracaoNotas[] = { 4, 4, 4, 2, 2, 4, 4, 4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 2, 2, 4, 4, 4, 4, 4 };

  for (int i = 0; i < 24; i++) {
    tone(buzzer2, melodia[i]);
    delay(500 / duracaoNotas[i]);
    noTone(buzzer2);
    delay(50);
  }
}

void playMusicaCasamento() {
  int melodia[] = { 440, 494, 523, 587, 659, 698, 784, 880, 784, 698, 659, 587, 523, 494, 440, 440, 523, 659, 523, 440, 392, 440, 494 };
  int duracaoNotas[] = { 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4 };

  for (int i = 0; i < 23; i++) {
    tone(buzzer3, melodia[i]);
    delay(500 / duracaoNotas[i]);
    noTone(buzzer3);
    delay(50);
  }
}

void playWeWillRockYou() {
  int melodia[] = { 329, 369, 329, 369, 329, 369, 329, 369, 220, 261, 293, 329, 220 };
  int duracaoNotas[] = { 8, 8, 8, 8, 8, 8, 4, 4, 8, 8, 8, 4, 4 };

  for (int i = 0; i < 13; i++) {
    tone(buzzer1, melodia[i]);
    delay(500 / duracaoNotas[i]);
    noTone(buzzer1);
    delay(50);
  }
}

void playSonatinaCMaior() {
  int melodia[] = { 261, 330, 392, 523, 392, 330, 261, 196, 131, 261, 294, 196 };
  int duracaoNotas[] = { 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 1000, 1000 };

  for (int i = 0; i < 12; i++) {
    tone(buzzer2, melodia[i]);
    delay(duracaoNotas[i]);
    noTone(buzzer2);
    delay(50);
  }
}
