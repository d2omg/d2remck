#include <d2remck.h> //Подключаем библиотеку

Add a(2, 4);  //Объявляем пины (вход, выход)

void setup(){
  a.initmk(false); //Объявляем начальное состояние выхода
}

void loop(){
  a.tick(500); //Объявляем задержку в мс
}