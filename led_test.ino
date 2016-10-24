// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 &12  as an output.
  pinMode(13, OUTPUT);
  int n = 0;
}
// the loop function runs over and over again forever
void loop() {
  int n = 0;
  while (n < 3){
    digitalWrite(13, HIGH); 
    delay(5000);
    digitalWrite(13, LOW);
    delay(1000);
    n++;
  }
  int n = 0;
  while (n < 3);
    digitalWrite(13, HIGH); 
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
    n++;
  }
}
