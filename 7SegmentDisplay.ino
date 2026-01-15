byte arr[] = {0b0001000,0b0111011,0b0010100,0b0010001,0b0100011,0b1000001,0b1000000,0b0011011,0b0000000,0b0000001};
int t = 0;

void setDPins(byte bitVal);

void setup() {
  for(int pin = 2; pin <= 8; pin++){
    pinMode(pin , OUTPUT);
  }
}

void loop() {
  while (true){
    setDPins(arr[t++ % 10]);
    delay(1000);
  }
  
}
void setDPins(byte bitVal){
  for(int i = 0; i < 7; i++){
    digitalWrite(i+2,(bitVal >> i) & 1);
  }
}