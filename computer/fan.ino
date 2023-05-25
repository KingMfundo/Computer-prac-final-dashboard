const int fanPin = 7;

void setup() {
  pinMode(fanPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read();
    
    if (command == '1') {
      digitalWrite(fanPin, HIGH);
      Serial.println("Fan turned on");
    } else if (command == '0') {
      digitalWrite(fanPin, LOW);
      Serial.println("Fan turned off");
    }
  }
}
