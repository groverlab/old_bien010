void setup() {
  Serial.begin(9600);
  pinMode(7, INPUT);
}

int GroverIsUp = 0;  // 1=UP, 0=DOWN
int sensorValue = 0;
int sitUpCounter = 0;

void loop() {
  sensorValue = digitalRead(7);
  if(GroverIsUp == 1) {
    if(sensorValue == 0) {
      GroverIsUp = 0;
    }
  }
  else {
    if(sensorValue == 1) {
      GroverIsUp = 1;
      sitUpCounter = sitUpCounter + 1;
      Serial.println(sitUpCounter);
    }
  }
  delay(100);
}
