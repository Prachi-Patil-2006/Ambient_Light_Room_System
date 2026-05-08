int ldr = 9;
int led = 13;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(ldr, INPUT);
}

void loop() {
  if (digitalRead(ldr)==1)
    digitalWrite(led, HIGH);
  else
    digitalWrite(led, LOW);
}