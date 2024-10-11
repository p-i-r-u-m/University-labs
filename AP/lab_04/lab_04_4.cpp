#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    
    double x, xp, xk, dx, y, R;
    
    cout << "R = "; cin >> R;
    if (R < 0)
    {
        R = abs(R);
        cout << endl << "!!! Error !!!" << endl
            << "    R < 0    " << endl
            << "Error fixed! R = " << R << endl;
    }
    

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
        if ( x <= 0 )
            y = -((R*x/6) + R);
        else if ( x >= 0 && x <= R )
            y = -sqrt(pow(R, 2) - pow(x, 2));
        else if ( (x > R) && (x < (2*R)) )
            y = sqrt(pow(R, 2) - pow((x - R), 2));
        else
            y = R;

   
         cout << "| " << setw(17) << setprecision(3) << x << " | "
        << setw(17) << setprecision(3) << y << " |" << endl;
        x += dx;

    }
    cout << "-----------------------------------------" << endl;

    std::cout << "TEST TEST!!!\n";   

    cin.get();
    return 0;
}
