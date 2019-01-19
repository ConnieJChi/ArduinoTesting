int buzzer = 12;
int button = 5;
int light = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer,OUTPUT);
  pinMode(button, INPUT_PULLUP);  
  pinMode(light, OUTPUT);
}

void loop() {
  if (digitalRead(button) == LOW) {
    digitalWrite(buzzer, HIGH);
    digitalWrite(light, HIGH);
    delay(1000);
    digitalWrite(buzzer, 0);
    digitalWrite(light, 0);
  }

}
