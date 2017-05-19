// --------------
// Anode RGB LED
// --------------

int red = D0;
int green = D1;
int blue = D2;

void setup() {

  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

}

void loop() {
  // Turn all off
  analogWrite(red, 255);
  analogWrite(green, 255);
  analogWrite(blue, 255);
  
  // Fade out Red
  for (int i=0;i<255;i++) {
    analogWrite(red, i);
    delay(10); 
  }
  analogWrite(red, 255);
  
  // Fade in Green
  for (int i=255;i>0;i--) {
    analogWrite(green, i);
    delay(10); 
  }
  analogWrite(green, 255);

  // Blink Blue w/ Acceleration
  for (int i=100;i>10;i-=10) {
    analogWrite(blue, 200);
    delay(i);
    analogWrite(blue, 255);
    delay(i);
  }
}
