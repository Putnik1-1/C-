#include <iostream>

int main() {
    int mansCount;
    int barbersCount;

    std::cout << "************** Барбершоп-калькулятор **************\n";
    std::cout << "Введите число мужчин в городе: ";
    std::cin >> mansCount;
    std::cout << "Сколько уже барберов удалось нанять?";
    std::cin >> barbersCount;

   
    int mansPerBarber = 8; 
    int mansPerBarberPerMonth = mansPerBarber * 30;
    std::cout << "Один барбер стрижет столько клиентов в месяц " << mansPerBarberPerMonth << "\n";

    int requiredBarbersCount = mansCount / mansPerBarberPerMonth;
    if (mansCount % mansPerBarberPerMonth != 0) {
        requiredBarbersCount += 1;
    }

    std::cout << "Необходимое число барберов: " << requiredBarbersCount << "\n";

    std::cout << requiredBarbersCount << " барбера могут постричь " << requiredBarbersCount * mansPerBarberPerMonth << " мужчин за месяц.\n";

    if (requiredBarbersCount > barbersCount) {
        std::cout << "Нужно больше барберов!!!\n";
    } else if (requiredBarbersCount == barbersCount) {
        std::cout << "Барберов ровно столько, сколько нужно!!!\n";
    }

    if (barbersCount > requiredBarbersCount * 2) {
        std::cout << "У вас работает в два раза больше барберов, чем это нужно!!!\n";
    }

}
