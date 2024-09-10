#include <iostream>

int main() {
  int speed;
  int altitude;
  std::cout << "Введите скорость самолета: ";
  std::cin >> speed;
  std::cout << "Введите высоту самолета: ";
  std::cin >> altitude;

  if (speed >= 750 && speed <= 850){
    std::cout << "Вы летите с правильной скоростью!\n";
  }else {
    std::cout << "Вы летите с неправильной скорость!\n";
  }if (altitude >= 9000 && altitude <= 9500){
    std::cout << "Вы летите в правильном эшелоне!\n";
  }else {
    std::cout << "Вы летите в неправильном эшелоне!\n";
  }
  return 0;
}