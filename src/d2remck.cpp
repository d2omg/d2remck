#include <d2remck.h>

Add::Add(byte rpin, byte lpin) {
 _rpin = rpin;
 _lpin = lpin;
}

void Add::initmk(bool flag){
    pinMode(_rpin, INPUT);
    pinMode(_lpin, OUTPUT);
    _flag = flag;
}
bool Add::tick(int waiter){
    if (digitalRead(_rpin) == 1){
        if(_flag){
            _flag = false;
        }else{
            _flag = true;
        }
        delay(waiter);
    }
    if (_flag){
        digitalWrite(_lpin, LOW);
    }else{
        digitalWrite(_lpin, HIGH); 
    }
    return _flag;
}