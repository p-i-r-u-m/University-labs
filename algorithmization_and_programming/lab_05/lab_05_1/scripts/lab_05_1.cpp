#include <iostream>
#include <cmath>

using namespace std;

double k(const double x, const double y);

int main()
{
    double p, q;
    
    cout << "p = "; cin >> p;
    cout << "q = "; cin >> q;

    double c = ( (k(1+p, q*q) - k(q*p, 1))/(1+k(p*p, q)) );

    cout << "c = " << c << endl;

    return 0;
}

double k(const double x, const double y)
{
    return( (sin(x)/(y*y)) + (cos(y)/(x*x)) );
}
