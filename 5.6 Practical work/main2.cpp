#include <iostream>

int main() {
    int days;

    std::cout << "Введите день: ";
    std::cin >> days;

    if (days >= 1 && days <= 10 && days >= 13 && days <= 14 && days >= 20 && days <= 21 && days >= 27 && days <= 28) {
        std::cout << "Данный день выходной.";
    }else if (days >= 13 && days <= 14 || days >= 20 && days <= 21 || days >= 27 && days <= 28) {
        std::cout << "Данный день выходной.";
    }else {
        std::cout << "Данный день не выходной";
    }
    return 0;
}