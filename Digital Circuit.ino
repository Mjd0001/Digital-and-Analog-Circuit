
int TRIG   = 5; 
int ECHO   = 6; 
int BUZZER = 11; 


float distance;

void setup() {       
  pinMode(TRIG, OUTPUT);   
  pinMode(ECHO, INPUT);    
  pinMode(BUZZER, OUTPUT); 
}

void loop() {
  
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  distance = 0.017 * pulseIn(ECHO, HIGH);

  if(distance < 50)
    digitalWrite(BUZZER, HIGH); 
  else
    digitalWrite(BUZZER, LOW);  

  delay(500);
}
