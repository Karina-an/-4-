#include <iostream>

int main() { 
  int price = 30000;
  int entrances = 5;
  int apartments = 15;
int payment =  ( entrances * apartments ) \ price;
  std::cout << "Приветствуем вас в калькуляторе квартплаты!\n";
std::cout << "Введите сумму, указанную в квитанции: " << price << "\n";
std::cout << "Сколько подъездов в вашем доме? " << entrances << "\n";
  std::cout << "Сколько квартир в каждом подъезде? " << apartments << "\n";
std::cout << "Получается,каждая квартира должна платить по" << ( entrances * apartments ) \ price << "руб.\n";}