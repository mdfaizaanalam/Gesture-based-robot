//Arduino Code//



#include <VirtualWire.h>
int i=0;
const int m1p1=2;
const int m1p2=3;
const int m2p1=4;
const int m2p2=5;

void setup()
{
Serial.begin(9600);
Serial.println("Listening");
vw_setup(2000);
vw_rx_start();
pinMode(m1p1,OUTPUT);
pinMode(m1p2,OUTPUT);
pinMode(m2p1,OUTPUT);
pinMode(m2p2,OUTPUT);
}
void loop()
{
byte message[VW_MAX_MESSAGE_LEN];
byte messageLength = VW_MAX_MESSAGE_LEN;
if (vw_get_message(message, &messageLength))
{
for ( i = 0; i < messageLength; i++)
{
Serial.write(message[i]);

}
Serial.println();
if(message[0]=='1')
{
  Serial.println("f");
  digitalWrite(m1p1,HIGH);
  digitalWrite(m1p2,LOW);
   digitalWrite(m2p1,HIGH);
  digitalWrite(m2p2,LOW);
}
else if(message[0]=='2')
{
  Serial.println("b");
  digitalWrite(m1p1,LOW);
  digitalWrite(m1p2,HIGH);
   digitalWrite(m2p1,LOW);
  digitalWrite(m2p2,HIGH);
}
else if(message[0]=='3')
{
  Serial.println("r");
  digitalWrite(m1p1,HIGH);
  digitalWrite(m1p2,LOW);
   digitalWrite(m2p1,LOW);
  digitalWrite(m2p2,LOW);
}
else if(message[0]=='4')
{
  Serial.println("l");
  digitalWrite(m1p1,LOW);
  digitalWrite(m1p2,LOW);
   digitalWrite(m2p1,HIGH);
  digitalWrite(m2p2,LOW);
}
else
{
  Serial.println("s");
  digitalWrite(m1p1,LOW);
  digitalWrite(m1p2,LOW);
   digitalWrite(m2p1,LOW);
  digitalWrite(m2p2,LOW);
}
}
}