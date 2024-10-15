// Lab_03_2.cpp
// Грушевський Іван
// Лабораторна робота № 3.2
// Розгалудження, задане формулою: функція з параметрами.
// Варіант 0.4

#include <iostream>

using namespace std;

int main()
{
    // вхідні параметри 
    double x;
    double a;
    double b;
    double c;

    // результат обчислення виразу
    double F;


    // введення вхідних параметрів
    cout << "\na = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;

    // спосіб 1: розгалудження в скороченій формі
    if ( c < 0 && x != 0 )
        F = (-1)*a*x - c;
    if ( c > 0 && x == 0 )
        F = ((x - a) / ((-1) * c));
    if ( !(c < 0 && x != 0) && !(c > 0 && x == 0) )
        F = ((b * x) / (c - a));

    cout << "\n\n1) F = " << F << endl;

    // спосіб 2: розгалудження в повній формі
    if ( c < 0 && x != 0 )
         F = (-1)*a*x - c;
    else
        if ( c > 0 && x == 0 )
            F = ((x - a) / ((-1) * c));
        else
            F = ((b * x) / (c - a));
    
    cout << "2) F = " << F << endl;
    cout << "test";

    cin.get();
    return 0;

}
