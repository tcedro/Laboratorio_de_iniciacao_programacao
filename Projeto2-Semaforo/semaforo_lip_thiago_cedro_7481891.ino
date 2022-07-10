#define green 2 
#define yellow 3 
#define red 4 
#define button 5



void setup() {
  Serial.begin(9600);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(button, INPUT);
}

/*void loop() {
  digitalWrite(red, HIGH);
  delay(5000);
  digitalWrite(red, LOW);
   
  
  digitalWrite(yellow, HIGH);
  delay(2000); 
  digitalWrite(yellow, LOW);
  
  
  digitalWrite(green, HIGH);
  delay(5000); 
  digitalWrite(green, LOW);
  
  digitalWrite(yellow, HIGH);
  delay(2000); 
  digitalWrite(yellow, LOW);
  
  
  
}*/

void loop() {
  
  
  setRed();
  if(digitalRead(button) == 1) {
  	Serial.println(digitalRead(button));
    setRed();
    
  }
  setGreen();
  if(digitalRead(button) == 1) {
  	Serial.println(digitalRead(button));
    setRed();
  }
}
 

void setRed() {
  digitalWrite(red, HIGH);
  delay(5000);
  digitalWrite(red, LOW);
  setYellow();
  
}

void setYellow() {
  digitalWrite(yellow, HIGH);
  delay(3000);
  digitalWrite(yellow, LOW);
  
}

void setGreen() {
  digitalWrite(green, HIGH);
  delay(5000);
  digitalWrite(green, LOW);
  setYellow();
  
}

