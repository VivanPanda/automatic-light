int lightPin = A7;
int lightVal;

void setup() {
  Serial.begin(9600);
  pinMode(lightPin, INPUT);
  // pinMode(redPin, OUTPUT);
}

void loop() {
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
}
