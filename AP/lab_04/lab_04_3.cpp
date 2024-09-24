#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
    
    double x, xp, xk, dx, a, b, c, F;
    
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

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
        << setw(10) << "F" << setw(10) << "|" << endl;
    cout << "-----------------------------------------" << endl;
   


    x = xp;
    while (x <= xk)
    {
        if ( c < 0 && x != 0 )
            F = (-1)*a*x - c;
        else
            if ( c > 0 && x == 0 )
                F = ((x - a) / ((-1) * c));
            else
                F = ((b * x) / (c - a));
    
         cout << "| " << setw(17) << setprecision(3) << x << " | "
        << setw(17) << setprecision(3) << F << " |" << endl;
        x += dx;

    }
    cout << "-----------------------------------------" << endl;

   

    cin.get();
    return 0;
}
