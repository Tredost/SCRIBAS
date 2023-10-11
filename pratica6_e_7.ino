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
    digitalWrite(buzzer1, HIGH);
    delay(50);
    digitalWrite(buzzer1, LOW);
    break;

    case 1:
    digitalWrite(buzzer1, HIGH);
    delay(200);
    digitalWrite(buzzer1, LOW);
    break;

    case 2:
    digitalWrite(buzzer1, HIGH);
    delay(100);
    digitalWrite(buzzer1, LOW);
    break;

    case 3:
    digitalWrite(buzzer1, HIGH);
    delay(250);
    digitalWrite(buzzer1, LOW);
    break;

    case 4:
    digitalWrite(buzzer1, HIGH);
    delay(20);
    digitalWrite(buzzer1, LOW);
    break;

    case 5:
    digitalWrite(buzzer1, HIGH);
    delay(80);
    digitalWrite(buzzer1, LOW);
    break;

    case 6:
    digitalWrite(buzzer1, HIGH);
    delay(200);
    digitalWrite(buzzer1, LOW);
    break;

    case 7:
    digitalWrite(buzzer1, HIGH);
    delay(180);
    digitalWrite(buzzer1, LOW);
    break;
  }

  delay(1000); 
  }
}
