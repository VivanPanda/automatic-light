int lightPin = A7;
int lightVal;
int redPin = 8;

void setup() {
  Serial.begin(9600);
  pinMode(lightPin, INPUT);
  pinMode(redPin, OUTPUT);
}

void loop() {
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  delay(500);
  if (lightVal >= 800) {
    digitalWrite(redPin, LOW); // turn off lights if above 800
  }
  if (lightVal < 600) {
    digitalWrite(redPin, HIGH); // turn on lights if below 600
  }
}
