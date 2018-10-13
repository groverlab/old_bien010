void setup() {
  Serial.begin(9600);
  pinMode(7, INPUT);
}

int currentValue; 
int lastValue = 0;
int sitUpCounter = 0;

void loop() {
  currentValue = digitalRead(7);
  if(lastValue == 0 and currentValue == 1) {
    sitUpCounter = sitUpCounter + 1;
    Serial.println(sitUpCounter);
  }
  lastValue = currentValue;
  delay(100);
}
