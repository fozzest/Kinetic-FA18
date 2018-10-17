const int pResistor = A1; // Photoresistor at Arduino analog pin A0
const int ledPin=9;       // Led pin at Arduino pin 9

//Variables
int value;   
int newValue;// Store value from photoresistor (0-1023)

void setup(){
  Serial.begin(9600); 
 //pinMode(ledPin, OUTPUT);  // Set lepPin - 9 pin as an output
 pinMode(pResistor, INPUT);// Set pResistor - A0 pin as an input (optional)
}

void loop(){
  value = analogRead(pResistor);

  value = map(value, 0, 1023, 00, 255);
  
Serial.println(value);
  }

