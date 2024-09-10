#include <iostream>

 
int main() {

    int days;
    int month;
 
 
    std::cout << "Введите день месяца: ";
    std::cin >> days;
    std::cout << "Введите день, с которого началаcя месяц (1 - понедельник): ";
    std::cin >> month;
    
    std::cout << days << "  ";
    if ((days >= 1 && days <= 5 ) || (days >= 8 && days <= 10))
    {
        std::cout << "Выходной день.";
    }
    else if ( days <= 0 ||  days > 31 ||  month > 7)
    {
        std::cout << "Некоректное значение.";
    }
    else if ((days + month) % 7 <= 1)
    {
        std::cout << "Выходной день.";
    }
    else
    {
        std::cout << "Рабочий день.";
    }
    
}