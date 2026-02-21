#include <SoftwareSerial.h>

SoftwareSerial bt(10, 11); 
char data;

void setup() {
  pinMode(7, OUTPUT);
  digitalWrite(7, LOW);
  bt.begin(9600);
}

void loop() {
  if (bt.available()) {
    data = bt.read();

    if (data == '1') {
      digitalWrite(7, HIGH); // ON
    }
    else if (data == '0') {
      digitalWrite(7, LOW); // OFF
    }
  }
}