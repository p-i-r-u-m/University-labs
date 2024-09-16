// Lab_03_1.cpp
// Грушевський Іван
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної
// Варіант 0.4

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; // вхідний параметр 
    double y; // результат обчислення виразу
    double A; // проміжний результат - функціонально стала частина виразу
    double B; // проміжний результат - функціонально змінна частина виразу

    cout << "x = "; cin >> x;

    A = 1+x;

    // 1 спосіб: розгалудження в скороченій формі
    if ( x <= 4 )
        B = exp(log(2 + 2*x) + 2*x);
    if ( 4 < x && x <= 7 )
        B = pow(exp(x) + abs(x), 2);
    if ( x > 7 )
        B = (1 - 7*x + pow(x, 2) - 2*pow(x, 3));

    y = A + B;

    cout << endl;
    cout << "1) y = " << y << endl;

    // спосіб 2: розгалудження в повній формі
    if ( x > 7 )
        B = (1 - 7*x + pow(x, 2) - 2*pow(x, 3));
    else
        if ( 4 < x && x <= 7 )
            B = pow(exp(x) + abs(x), 2);
        else
            B = exp(log(2 + 2*x) + 2*x);

    y = A + B;

    cout << "2) y = " << y << endl;

    cin.get();
    return 0;

}
