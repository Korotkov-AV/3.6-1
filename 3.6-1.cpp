﻿// 3.6-1.cpp : 

#include <iostream>
#include <Windows.h>
#include "Header.h"



int main()
{
    int a, b, c;
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите первое число : ";
    std::cin >> a;
    std::cout << "Введите второе число : ";
    std::cin >> b;
    std::cout << "Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень) : ";
    std::cin >> c;

    func(a, b, c);



    std::cout << "\n\n Hello World!\n";
}


//Введите первое число : 20
//Введите второе число : 2
//Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень) : 5
//20 в степени 2 = 400
