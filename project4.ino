int led = 13;
int button = 2;
int buttonState = 0;
int buzzerPin = 8;

void setup() {
 pinMode(led, OUTPUT); 
 pinMode(button, INPUT);
 pinMode(buzzerPin, OUTPUT);
 Serial.begin(9660);
}

void loop() {
  buttonState = digitalRead(button);

//button to buzzer & led activation
 
  if (buttonState == HIGH){
    digitalWrite(led, HIGH);
    tone(buzzerPin, 100);  
  } else {
 digitalWrite(led,LOW);
  noTone(buzzerPin);
  }
  Serial.println(buttonState);
}
