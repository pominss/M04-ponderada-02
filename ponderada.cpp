const int leds[] = {8, 9, 10};
const unsigned long tempos[] = {6000, 2000, 4000};
const int numLeds = 3;
int indice = 0;
unsigned long tempoAnterior = 0;

void setup() {
  for (int i = 0; i < numLeds; i++) pinMode(leds[i], OUTPUT);
  digitalWrite(leds[indice], HIGH);
  tempoAnterior = millis();
}

void loop() {
  unsigned long tempoAtual = millis();

  if (tempoAtual - tempoAnterior >= tempos[indice]) {
    digitalWrite(leds[indice], LOW);
    indice = (indice + 1) % numLeds; // avança no ciclo
    digitalWrite(leds[indice], HIGH);
    tempoAnterior = tempoAtual;
  }
}
