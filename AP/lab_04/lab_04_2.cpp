#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    
    double x, xp, xk, dx, y, A, B;
   
    do
    {
        xp = 0;
        xk = 0;
        dx = 0;
        cout << "xp = "; cin >> xp;
        cout << "xk = "; cin >> xk;
        if (xp > xk)
        {
            cout << endl << "!!! Error !!!" << endl
                << "   xp > xk   " << endl << endl;
            continue;
        }
        else{
            cout << "dx = "; cin >> dx;
            break;
        }

    }while (xp > xk);


    cout << fixed;
    cout << "-----------------------------------------" << endl;
    cout << "|" << setw(10) << "x" << setw(10) << "|"
        << setw(10) << "y" << setw(10) << "|" << endl;
    cout << "-----------------------------------------" << endl;
   


    x = xp;
    while (x <= xk)
    {
        A = 1+x;

        if ( x > 7 )
            B = (1 - 7*x + pow(x, 2) - 2*pow(x, 3));
        else {

            if ( 4 < x && x <= 7 )
                B = 1/tan( ((1+x)/9) + 8*x);
            else
                B = exp(log(2 + 2*x) + 2*x);
        }
        y = A + B;

        cout << "| " << setw(17) << setprecision(3) << x << " | "
        << setw(17) << setprecision(3) << y << " |" << endl;
        x += dx;

    }
    cout << "-----------------------------------------" << endl;

   

    cin.get();
    return 0;
}
