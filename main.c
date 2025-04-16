//Variables to store pin location
int ledRedPin = 11;
int ledYellowPin = 12;
int ledGreenPin = 13;
int ldrPin = A0;
int ldrValue = 0;
int buzzerPin = 10;

//Variables to manage the buzzer
unsigned long timeBreak = 3000;
bool buzzerRequest = false;

void setup() {
  pinMode(ledRedPin, OUTPUT); //red led set as output
  pinMode(ledYellowPin, OUTPUT); //yellow led set as output
  pinMode(ledGreenPin, OUTPUT); //green led set as output
  pinMode(buzzerPin, OUTPUT); //buzzer set as output
  Serial.begin(9600);
}

void loop() {
  ldrValue = analogRead(ldrPin); //Convert analog value to digital value
  Serial.println(ldrValue); //Print the digital value

  //Checking if the brightness is more than 78
  if(ldrValue >= 78 && ldrValue < 250){
    unsigned long duration = millis();

    digitalWrite(ledYellowPin, HIGH); //Light up yellow led
    digitalWrite(ledGreenPin, LOW); //Turn off green led
    digitalWrite(ledRedPin, LOW); //Turn off red led

    //Manage the buzzer with a delay of 3s
    if (!buzzerRequest){
      tone(buzzerPin, 10, 3000);
        if(duration >= timeBreak){
          noTone(buzzerPin);
          buzzerRequest = false;
        }
    }
  }

  //Checking if the brightness is less then 77
  else if (ldrValue <= 77){
    digitalWrite(ledRedPin, HIGH); //Light up red led
    digitalWrite(ledGreenPin, LOW); //Turn off green led
    digitalWrite(ledYellowPin, LOW); //Turn off yellow led
    noTone(buzzerPin);
  }
  else {
    digitalWrite(ledGreenPin, HIGH);
    digitalWrite(ledYellowPin, LOW);
    digitalWrite(ledRedPin, LOW);
    noTone(buzzerPin);
  }
}
