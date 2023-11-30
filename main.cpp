#include <iostream>
#include <string>
#include <iomanip>
#include "greeter.h"

int main() {
  std::cout << "Введите имя: ";
  std::string name;
  std::cin >> std::setw(254) >> name;
  Greeter greeter;
  std::cout<<greeter.greet(name);
  std::cout << std::endl;
}
