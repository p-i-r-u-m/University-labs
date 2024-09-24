#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
    // вхідний радіус, аргумент і параметр
    double R, x, y;
    srand((unsigned) time(NULL));

    cout << "R = "; cin >> R;
    
    cout << "Solution 1:" << endl;
    for (int i=0; i<10; i++)
    {
        cout << "[" << (i+1) << "]" <<  " (x , y) "; 
        cin >> x >> y;

        cout << "Result: ";

        if ( (((pow(x,2) + pow(y, 2) ) <= pow(R, 2) ) && y >= 0 ) ||
                ( y <= x && y >= -R && x <= 0 )) 
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    cout << endl << "Solution 2:" << endl;
    cout << endl << fixed;

    for (int i=0; i<10; i++)
    {
        x = -R + rand() * (2*R) / RAND_MAX;
        y = -R + rand() * (2*R) / RAND_MAX;

        if ( (((pow(x,2) + pow(y, 2) ) <= pow(R, 2) ) && y >= 0 ) ||
            ( y <= x && y >= -R && x <= 0 )) 
            cout << "[" << (i+1) << "]"<< setw(8) << setprecision(4) << x << "  "
                << setw(8) << setprecision(4) << y << "  " << "yes" << endl;
        else
            cout << "[" << (i+1) << "]"<< setw(8) << setprecision(4) << x << "  "
                << setw(8) << setprecision(4) << y << "  " << "no" << endl;
    }

    cin.get();
    return 0;
}
