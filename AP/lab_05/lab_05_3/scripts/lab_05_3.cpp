#include <iostream>
#include <cmath>

using namespace std;

double z(const double x);

int main()
{
    double pp, pk, r;
    int n;

    cout << "pp = "; cin >> pp;
    cout << "pk = "; cin >> pk;
    cout << "n = "; cin >> n;

    double dp = (pk - pp)/n;

    double p = pp;

    while (p <= pk)
    {
        r = z(p*p + 1) - z(p*p - 1) + 2*z(p);
        cout << p << " " << r << endl;
        p += dp;
    }
}

double z(const double x)
{
    if (abs(x) >= 1)
        return( (sin(x)+1)/(pow(cos(x), 2) + exp(x)) );
    else
    {
        double S = 0;
        int k = 0;
        double a = 1;
        S = a;
        do
        {
            k++;
            double R = (a*x)/k;
            a *= R;
            S += a;
        } while(k < 6);
        return S;
    }
}
