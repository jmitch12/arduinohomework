// Create a global variable to hold the
// state of the switch. 
int switchstate = 0;

void setup() {
  // declare the LED pins as outputs
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  // declare the switch pin as an input
  pinMode(2, INPUT);
}

void loop() {

  // read the value of the switch
  // digitalRead() checks to see if there is voltage
  // on the pin or not
  switchstate = digitalRead(2);

  // if the button is not pressed
  // turn on the green LED 
  if (switchstate == LOW) {
    digitalWrite(3, HIGH); // turn the green LED on pin 3 on
    digitalWrite(4, LOW);  // turn the red LED on pin 4 off
    digitalWrite(5, LOW);  // turn the red LED on pin 5 off
  }
  // this else is part of the above if() statement.
  // if the switch is not LOW (the button is pressed)
  // turn off the green LED and blink the other LEDs 
  else {
    digitalWrite(3, LOW);  // turn the green LED off
    digitalWrite(4, HIGH);  // turn the yellow LED on pin 4 on
    digitalWrite(5, LOW); // turn the red LED on pin 5 off
    // wait for a quarter second before changing lights
    delay(250);
    digitalWrite(4, LOW); // turn the yellow LED on pin 4 off
    digitalWrite(5, HIGH);  // turn the red LED on pin 5 on
    // wait for a quarter second before changing the light back to green
    delay(250);

  }
}

