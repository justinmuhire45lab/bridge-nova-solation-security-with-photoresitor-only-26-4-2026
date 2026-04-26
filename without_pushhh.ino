
int buzzer = 6;
int led1 = 2;
int led2 = 3;
int ldr = A0;

int lightValue = 0;
int threshold = 500; 

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  
  Serial.begin(9600); 
}

void loop() {
  lightValue = analogRead(ldr); 

  Serial.println(lightValue); 

  if (lightValue < threshold) {
    
    digitalWrite(led1, HIGH);  
    digitalWrite(led2, LOW); 
    digitalWrite(buzzer, HIGH);
  } 
  else {
   
    digitalWrite(led1, LOW);   
    digitalWrite(led2, HIGH);   
    digitalWrite(buzzer, LOW); 
  }

  delay(200);
}
