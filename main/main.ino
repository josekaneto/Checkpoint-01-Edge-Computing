int ledRedPin = 11;
int ledYellowPin = 12;
int ledGreenPin = 13;
int ldrPin = A0;
int ldrValue = 0;
int buzzerPin = 10;

unsigned long timeBreak = 3000;
unsigned long duration = 0;
bool buzzerRequest = false;

void setup() {
  pinMode(ledRedPin, OUTPUT);
  pinMode(ledYellowPin, OUTPUT);
  pinMode(ledGreenPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  ldrValue = analogRead(ldrPin);
  Serial.println(ldrValue);

  if(ldrValue >= 78 && ldrValue < 250){
    duration = millis();

    digitalWrite(ledYellowPin, HIGH);
    digitalWrite(ledGreenPin, LOW);
    digitalWrite(ledRedPin, LOW);
    buzzerRequest = false;
  }
  else if (ldrValue <= 77){
    digitalWrite(ledRedPin, HIGH);
    digitalWrite(ledGreenPin, LOW);
    digitalWrite(ledYellowPin, LOW);

    if (!buzzerRequest){
      tone(buzzerPin, 262, 3000);
      buzzerRequest = true;
    }

  }
  else {
    digitalWrite(ledGreenPin, HIGH);
    digitalWrite(ledYellowPin, LOW);
    digitalWrite(ledRedPin, LOW);
    buzzerRequest = false;
  }
}