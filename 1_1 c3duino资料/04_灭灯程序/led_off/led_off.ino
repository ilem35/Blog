#define D4 12
#define D5 13

void setup() {
  Serial.begin(115200);
  delay(500);
  Serial.println("Hello World");

  pinMode(D4,OUTPUT);
  pinMode(D5,OUTPUT);
  digitalWrite(D4,LOW);
  digitalWrite(D5,LOW);
}

void loop() {
}
