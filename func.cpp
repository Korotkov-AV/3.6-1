#include "Header.h"
#include <iostream>

void func(int a, int b, int c) {
    switch (c) {
    case 1:
        std::cout << a << " ���� " << b << " = " << a + b << "\n";
        break;
    case 2:
        std::cout << a << " ����� " << b << " = " << a - b << "\n";
        break;
    case 3:
        std::cout << a << " ���������� " << b << " = " << a * b << "\n";
        break;
    case 4:
        std::cout << a << " ����������� " << b << " = " << a / b << "\n";
        break;
    case 5:
        std::cout << a << " � ������� " << b << " = " << pow(a, b) << "\n";
        break;
    default:
        std::cout << "�������� ����� ��� ��������� ";
        break;
    }
}