//Arduino Code


const int groundpin = A4; // analog input pin 4 -- ground
const int powerpin = A0; // analog input pin 5 -- voltage
const int xpin = A1; // x-axis of the accelerometer
const int ypin = A2; // y-axis
const int zpin = A3; // z-axis (only on 3-axis models)

#include <VirtualWire.h>
char inData[50];
int newmessage = 0;


void setup() {
  vw_setup(2000);
vw_set_tx_pin(12);
  // initialize the serial communications:
  Serial.begin(9600);

  // Provide ground and power by using the analog inputs as normal digital pins.
  // This makes it possible to directly connect the breakout board to the
  // Arduino. If you use the normal 5V and GND pins on the Arduino,
  // you can remove these lines.
  pinMode(groundpin, OUTPUT);
  pinMode(powerpin, OUTPUT);
  digitalWrite(groundpin, LOW);
  digitalWrite(powerpin, HIGH);
}

void loop() {
  // print the sensor values:
  Serial.print(analogRead(xpin));
  // print a tab between values:
  Serial.print("\t");
  Serial.print(analogRead(ypin));
  // print a tab between values:
  Serial.print("\t");
  Serial.print(analogRead(zpin));
  Serial.println();
  // delay before next reading:
  delay(100);
  char inChar;
byte index = 0;
char mss[20];
  if(analogRead(xpin)>310 && analogRead(ypin)>350 &&analogRead(zpin)>350 )
  {
     inData[0] = '1';
           sprintf(mss, "%s", inData);
           vw_send((uint8_t *)mss, strlen(mss));
           vw_wait_tx();
           Serial.println(mss);
           delay(600);
  }
   else if(analogRead(xpin)>310 && analogRead(ypin)<290 &&analogRead(zpin)>360)
  {
     inData[0] = '2';
           sprintf(mss, "%s", inData);
           vw_send((uint8_t *)mss, strlen(mss));
           vw_wait_tx();
           Serial.println(mss);
           delay(600);
  }
    else if(analogRead(xpin)<300 && analogRead(ypin)>310 &&analogRead(zpin)>360)
  {
     inData[0] = '3';
           sprintf(mss, "%s", inData);
           vw_send((uint8_t *)mss, strlen(mss));
           vw_wait_tx();
           Serial.println(mss);
           delay(600);
  }
    else if(analogRead(xpin)>360 && analogRead(ypin)>300 &&analogRead(zpin)>330)
  {
     inData[0] = '4';
           sprintf(mss, "%s", inData);
           vw_send((uint8_t *)mss, strlen(mss));
           vw_wait_tx();
           Serial.println(mss);
           delay(600);
  }
  else
  {
     inData[0] = '0';
           sprintf(mss, "%s", inData);
           vw_send((uint8_t *)mss, strlen(mss));
           vw_wait_tx();
           Serial.println(mss);
           delay(600);
  }
}
