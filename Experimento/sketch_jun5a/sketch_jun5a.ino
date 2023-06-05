void setup() {
  Serial.begin(115200);
  pinMode(A0, INPUT);

}
int entrada, entradaAnterior;

void loop() {

  entrada = analogRead(A0);

  if(entrada != entradaAnterior){
    Serial.println(entrada);
    entradaAnterior = entrada;
  }

  delay(100);
}
