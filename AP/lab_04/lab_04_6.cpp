#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double S, P;
    int i, j;

    P = 1;
    j = 1;
    while (j <= 15)
    {
        S = 0;
        i = j;
        while (i <= (j*j))
        {
            S += i*i;
            i++;
        }
        P *= sqrt(S);
        j++;
    }
    cout << "[1] " << P << endl;

    P = 1;
    j = 1;
    do {
        S = 0;
        i = j;
        do {
            S += i*i;
            i++;
        } while (i <= (j*j));
        P *= sqrt(S);
        j++;
    } while (j <= 15);
    cout << "[2] " << P << endl;

    P = 1;
    for (j=1; j <= 15; j++)
    {
        S = 0;
        for (i=j; i<=(j*j); i++)
        {
            S += i*i;
        }
        P *= sqrt(S);
    }
    cout << "[3] " << P << endl;

    P = 1;
    for (j=15; j>=1; j--)
    {
        S = 0;
        for (i=(j*j); i>=j; i--)
        {
            S += i*i;
        }
        P *= sqrt(S);
    }
    cout << "[4] " << P << endl;

    return 0;
}
