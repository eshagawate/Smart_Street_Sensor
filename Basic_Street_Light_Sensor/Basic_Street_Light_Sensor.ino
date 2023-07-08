int ldrPin = A0;
int led = 7;
int threshold = 30;

void setup() {
  Serial.begin(9600);//9600 bits per sec
  pinMode(led,OUTPUT);

}

void loop() {
  int data = analogRead(ldrPin);
  Serial.print("\n");
  Serial.print("Light Sensor");
  Serial.print("Value = ");
  Serial.print(data);
  delay(1000);
  if(data < threshold)
  {
    digitalWrite(led, HIGH);
    //delay(10);
    
  }
  else{
    digitalWrite(led, LOW);
  }
}
