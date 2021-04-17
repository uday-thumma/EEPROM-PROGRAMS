#include<EEPROM.h>
int add=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
EEPROM.begin(512);

EEPROM.writeByte(add,1);
add +=sizeof(byte);

EEPROM.writeChar(add,'u');
add +=sizeof(char);

EEPROM.writeUChar(add,125);
add +=sizeof(unsigned char);

EEPROM.writeShort(add,1000);
add +=sizeof(short);

EEPROM.writeUShort(add,1000);
add +=sizeof(unsigned short);

EEPROM.writeInt(add,40000);
add +=sizeof(int);

EEPROM.writeUInt(add,40000);
add +=sizeof(unsigned int);

EEPROM.writeFloat(add,112.412);
add +=sizeof(float);

EEPROM.writeDouble(add,40000.123456);
add +=sizeof(double);

EEPROM.writeBool(add,false);
add +=sizeof(bool);

String nam="UDAY KIRAN";
EEPROM.writeString(add,nam);
add +=nam.length()+1;

char my[20]="EMBEDDED";
EEPROM.writeString(add,my);
add += 20;

EEPROM.commit();
add=0;

Serial.print(add);Serial.print(" address of Byte value is: ");Serial.println(EEPROM.readByte(add));
add +=sizeof(byte);

Serial.print(add);Serial.print(" address of char value is: ");Serial.println((char)EEPROM.readChar(add));
add+=sizeof(char);

Serial.print(add);Serial.print(" address of unsigned char value is: ");Serial.println(EEPROM.readUChar(add));
add+=sizeof(unsigned char);

Serial.print(add);Serial.print(" address of short value is: ");Serial.println(EEPROM.readShort(add));
add+=sizeof(short);

Serial.print(add);Serial.print(" address of unsigned short value is: ");Serial.println(EEPROM.readUShort(add));
add+=sizeof(unsigned short);

Serial.print(add);Serial.print(" address of int value is: ");Serial.println(EEPROM.readInt(add));
add+=sizeof(int);

Serial.print(add);Serial.print(" address unsigned int value is: ");Serial.println(EEPROM.readUInt(add));
add+=sizeof(unsigned int);

Serial.print(add);Serial.print(" address float value is: ");Serial.println(EEPROM.readFloat(add));
add+=sizeof(float);

Serial.print(add);Serial.print(" address double value is: ");Serial.println(EEPROM.readDouble(add));
add+=sizeof(double);

Serial.print(add);Serial.print(" address bool value is: ");Serial.println(EEPROM.readBool(add));
add+=sizeof(bool);

Serial.print(add);Serial.print(" address string value is: ");Serial.println(EEPROM.readString(add));
add+=nam.length()+1;

Serial.print(add);Serial.print(" address char array value is: ");Serial.println(EEPROM.readString(add));
add+=20;

Serial.println(add);
}

void loop() {
  // put your main code here, to run repeatedly:

}
