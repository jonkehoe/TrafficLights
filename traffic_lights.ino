int red = 4;
int yellow = 3;
int green = 2;
int button = 6;


void setup() {                                           
   pinMode(red, OUTPUT);
   pinMode(yellow, OUTPUT);
   pinMode(green, OUTPUT);
   pinMode(button, INPUT);
}

void loop() {
if (digitalRead(button) == HIGH){
       delay(15); 
       if (digitalRead(button) == HIGH) {
           trafficLights();
       }
   }
   else {
     digitalWrite(green, HIGH);
     digitalWrite(red, LOW);
     digitalWrite(yellow, LOW);
   }
}

void trafficLights(){
   
// green off, yellow on for 2 seconds
   digitalWrite(yellow, HIGH);
   digitalWrite(green, LOW);
   digitalWrite(red, LOW);
   delay(2000);
   
// turn off yellow,turn red on for 3 seconds
   digitalWrite(red, HIGH);
   digitalWrite(green, LOW);
   digitalWrite(yellow, LOW);
   delay(3000);
   

// turn off red,turn on green with delay of 3 seconds so it can only be used again after 3 seconds
   digitalWrite(green, HIGH);
   digitalWrite(yellow, LOW);
   digitalWrite(red, LOW);
   delay(3000);
}
