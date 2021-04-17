#include<EEPROM.h>
#define a 257
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
EEPROM.begin(a);
Serial.println("data");
for(int i=0;i<a;i++)
{
  EEPROM.writeByte(i,i);

}
EEPROM.commit();
for(int i=0;i<a;i++)
{
    Serial.print((byte)EEPROM.read(i));Serial.print(" ");
}

}

void loop() {
  // put your main code here, to run repeatedly:

}
