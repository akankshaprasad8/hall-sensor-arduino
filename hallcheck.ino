        void setup() {

  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(3,INPUT);

}

void loop() {
  int sig=digitalRead(3);
  Serial.println(sig);
  delay(100);
  
}
