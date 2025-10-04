const int BUZZER = 10;
const int LED = 7;
const int IR = 3;

int val = 0;

void setup() {
  pinMode(BUZZER, OUTPUT);
  pinMode(LED, OUTPUT);
  pinMode(IR, INPUT);

  Serial.begin(9600);
}

void loop() {
  val = digitalRead(IR);
  if(val == 0) {
    digitalWrite(LED, HIGH);
    tone(BUZZER, 440, 500);
    Serial.println("Obstacle détecté !");
  }
  else {
    digitalWrite(LED, LOW);
    Serial.println("RAS...");
  }
  delay(1000);
}
