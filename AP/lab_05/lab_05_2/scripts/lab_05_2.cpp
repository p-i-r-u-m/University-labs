#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double S(const double x, const double eps, int &n, double s);
double A(const double x, const int n, double a);

int main()
{
    double xp, xk, x, dx, eps, s=0;
    int n = 0;

    cout << "xp є (-1; 1] and xk є (-1; 1]" << endl;
    
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
    while(x <= xk)
    {
        s = S(x, eps, n, s);

        cout << "|" << setw(9) << x << "|"
             << setw(13) << log(x + 1) << "|"
             << setw(13) << s << "|"
             << setw(9) << n << "|"
             << endl;
        x += dx;
    }
    cout << "-------------------------------------------------" << endl;
 
    return 0;
}

double S(const double x, const double eps, int &n, double s)
{
    n = 0;
    double a = x;
    s = a;
    do
    {
        n++;
        a = A(x, n, a);
        s += a;
    } while (abs(a) >= eps);
    return s;
}

double A(const double x, const int n, double a)
{
    double R = -((n*x)/(n+1));
    a *= R;
    return a; 
}
