void setup() {
  pinMode(11, OUTPUT);
}

float frequency=500;  // Hertz
float period = 1.0/frequency;
float half_period = period/2.0;
int half_period_in_microseconds = int(half_period * 1000000);

void loop() {
  digitalWrite(11, HIGH);
  delayMicroseconds(half_period_in_microseconds);
  digitalWrite(11, LOW);
  delayMicroseconds(half_period_in_microseconds);
}
