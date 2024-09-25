#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double xp, xk, x, dx, eps, a=0, R=0, S=0;

    int n = 0;
    
    cout << "xp є (-1; 1] and xk є [-1; 1]" << endl;
    
    do {
        cout << "xp = "; cin >> xp;
        cout << "xk = "; cin >> xk;

        // Check if the input values satisfy the condition
        if (!(-1 < xp && xp <= 1 && -1 < xk && xk <= 1 && xp <= xk)) {
            cout << "Invalid input. Please try again.\n";
        }
    } while (!(-1 < xp && xp <= 1 && -1 < xk && xk <= 1 && xp <= xk));

    cout << "dx = "; cin >> dx;
    if (dx < 0)
    {
        cout << "Error! dx < 0 \n";
        dx = abs(dx);
        cout << "Issue solved: dx = " << dx << endl;
    }

    cout << "eps = "; cin >> eps;
    if (eps < 0)
    {
        cout << "Error! eps < 0 \n";
        dx = abs(eps);
        cout << "Issue solved: eps = " << dx << endl;
    }

    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << "    |"
         << setw(10) << "ln(x+1)" << "   |"
         << setw(7) << "S" << "      |"
         << setw(5) << "n" << "    |"
         <<endl;
    cout << "-------------------------------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        n = 0;
        a = x;
        S = a;
        do {
            n++;
            R = -(n*x)/(n+1);
            a *= R;
            S += a;
        } while (abs(a) >= eps);
    
        cout << "|" << setw(9) << x << "|"
             << setw(13) << log(x + 1) << "|"
             << setw(13) << S << "|"
             << setw(9) << n << "|"
             << endl;
        x += dx;
    }
    cout << "-------------------------------------------------" << endl;
    
    cin.get();
    return 0;
}
