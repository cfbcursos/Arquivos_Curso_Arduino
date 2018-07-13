#define an5 A5

void setup() {
  pinMode(an5,INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(an5));
  delay(100);
}
