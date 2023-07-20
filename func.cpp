#include "Header.h"
#include <iostream>

void func(int a, int b, int c) {
    switch (c) {
    case 1:
        std::cout << a << " плюс " << b << " = " << a + b << "\n";
        break;
    case 2:
        std::cout << a << " минус " << b << " = " << a - b << "\n";
        break;
    case 3:
        std::cout << a << " умноженное " << b << " = " << a * b << "\n";
        break;
    case 4:
        std::cout << a << " разделенное " << b << " = " << a / b << "\n";
        break;
    case 5:
        std::cout << a << " в степени " << b << " = " << pow(a, b) << "\n";
        break;
    default:
        std::cout << "Веденное число вне диапазона ";
        break;
    }
}