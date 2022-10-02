#pragma once
#include <Arduino.h>
class Add {
public:
 Add(byte rpin, byte lpin);
 void initmk(bool flag);
 bool tick(int wait);
private:
 byte _rpin;
 byte _lpin;
 bool _flag;
};