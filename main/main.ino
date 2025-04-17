//All variables with pin numbers
int ledRedPin = 11;
int ledYellowPin = 12;
int ledGreenPin = 13;
int ldrPin = A0;
int ldrValue = 0; //Keeps track of ldr value
int buzzerPin = 10;

//Variables to control buzzer
unsigned long duration = 0;
bool buzzerRequest = false;

void setup() {
  //Set all components output
  pinMode(ledRedPin, OUTPUT);
  pinMode(ledYellowPin, OUTPUT);
  pinMode(ledGreenPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  ldrValue = analogRead(ldrPin); //Transform analog value in digital numbers
  Serial.println(ldrValue); //Print ldr value

  //Check the light and turn on Yellow led
  if(ldrValue >= 250 && ldrValue < 400){ 
    duration = millis();

    digitalWrite(ledYellowPin, HIGH);
    digitalWrite(ledGreenPin, LOW);
    digitalWrite(ledRedPin, LOW);
    noTone(buzzerPin);
    buzzerRequest = false; //Keep the buzzerRequest false
  }
  //Check the light and turn on Green led
  else if (ldrValue <= 600){
    digitalWrite(ledRedPin, LOW);
    digitalWrite(ledGreenPin, HIGH);
    digitalWrite(ledYellowPin, LOW);
  }
    //Turn on Red led if none of the above is on
  else {
    digitalWrite(ledGreenPin, LOW);
    digitalWrite(ledYellowPin, LOW);
    digitalWrite(ledRedPin, HIGH);

      //buzzer make sound
      if (!buzzerRequest){
        tone(buzzerPin, 262, 3000);
        buzzerRequest = true; //Turn off the buzzer sound
      }
  }
}
