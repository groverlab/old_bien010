void setup() {
  Serial.begin(9600);
  pinMode(7, INPUT);
  pinMode(11, OUTPUT);
}

int x = 0;

void loop() {
  x = digitalRead(7);
  if(x == 0) {
    Serial.println("Will is horizontal");
    digitalWrite(11, HIGH);
  }
  if(x == 1) {
    Serial.println("Will is vertical");
    digitalWrite(11, LOW);
  }
}
