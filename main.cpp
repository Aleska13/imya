#include <iostream>
#include <clocale>
#include "std.h"

using namespace std;

//программа является учебной 

int main() {
    setlocale(LC_ALL, "rus");

    int a, b;
    cout << "Введите 2 целых числа: ";
    cin >> a;
    cin >> b;

    cout << endl << "Сумма чисел = " << a + b << endl;

    cout << endl << "Разность чисел = " << a - b << endl;

    cout << endl << "Деление чисел = " << a / b << endl;

    system("pause");
    return 0;
}