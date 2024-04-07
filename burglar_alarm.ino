int pir_sensor = 11;
int pin= 5;
int buzz = 3;

void setup() {
  pinMode(pir_sensor, INPUT);    // initialize sensor as an input
  pinMode(pin, OUTPUT);
  pinMode(buzz, OUTPUT);
  Serial.begin(600);          // initialize serial
}

void play(){
  tone(buzz,300,345);
  digitalWrite(pin, HIGH);
  delay (700);
  tone(buzz,300,345);
  digitalWrite(pin, LOW);
  delay (700);
  tone(buzz,300,345);
  digitalWrite(pin, HIGH);
  delay (700);
  tone(buzz,300,345);
  digitalWrite(pin, LOW);
  delay(700);
  tone(buzz,300,345);
  digitalWrite(pin, HIGH);
  delay(700);
}

void loop(){
  int val = digitalRead(pir_sensor);  // read sensor value
  if (val == HIGH) {                  // check if the sensor is HIGH
    Serial.println("Motion detected!");
    play();
    play();
  }
  else{
    Serial.println("Motion not detected!");
    digitalWrite(pin, LOW);
    digitalWrite(buzz, LOW);
  }
}
