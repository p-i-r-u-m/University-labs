// Lab_03_4.cpp
// Грушевський Іван
// Лабораторна робота № 3.4
// Розгалудження, задане плоскою фігурою
// Варіант 0.4

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // вхідний радіус, аргумент і параметр
    double R;
    double x;
    double y;

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // розгалудження в повній формі
    if ( ( y <= sqrt( pow(R, 2) - pow(x, 2) ) && y >= 0 ) || 
                ( y <= x && y >= -R && x <= 0 ) )
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    cin.get();
    return 0;
}
