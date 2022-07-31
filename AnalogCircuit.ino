

void setup() {
  pinMode(3, OUTPUT); 
}

void loop() {

  if(analogRead(A0) < 500)
    digitalWrite(3, 1); 
  else
    digitalWrite(3, 0);  
}


 




