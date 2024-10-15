// Lab_03_3.cpp
// Грушевський Іван
// Лабораторна робота № 3.3
// Розгалудження, задане графіком функції
// Варіант 0.4

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // вхідні аргументи і параметри
    double x;
    double R;

    // Результат обчислення виразу
    double y;

    cout << "\nR = "; cin >> R;
    cout << "x = "; cin >> x;

    // розгалудження у повній формі 
    if ( x <= 0 )
        y = -((R*x/6) + R);
    else if ( x >= 0 && x <= R )
        y = -sqrt(pow(R, 2) - pow(x, 2));
    else if ( (x >= R) && (x <= (2*R)) )
        y = sqrt(pow(R, 2) - pow((x - R), 2));
    else
        y = R;

    cout << "\ny = " << y << endl;

    cin.get();
    return 0;
}
