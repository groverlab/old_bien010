void setup() {
  Serial.begin(9600);
  pinMode(7, INPUT);
}

int sitUpCounter = 0;

void loop() {
  sitUpCounter = sitUpCounter + digitalRead(7);
  Serial.println(sitUpCounter);
  delay(100);
}
