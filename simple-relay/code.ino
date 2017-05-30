// ---------------------
// Turn on/off AC Device
// ---------------------

int relay4 = D3;

void setup() {
  pinMode(relay4, OUTPUT);
}

void loop() {
  for (int i=1000;i>300;i-=10) {
    digitalWrite(relay4, HIGH);
    delay(i);
    digitalWrite(relay4, LOW);
    delay(i);
  }

  for (int i=300;i<1000;i+=10) {
    digitalWrite(relay4, HIGH);
    delay(i);
    digitalWrite(relay4, LOW);
    delay(i);
  }
}
