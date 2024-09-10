#include <iostream>

int main() {
    int days;

    std::cout << "Введите день: ";
    std::cin >> days;

    if ((days >= 1 && days <= 5) || (days >= 8 && days <= 10) || (days % 7 == 6 || days % 7 == 0)) {
    std::cout << "Данный день выходной.\n";
    } else {
    std::cout << "Данный день рабочий.\n";
    }
    
    return 0;
}