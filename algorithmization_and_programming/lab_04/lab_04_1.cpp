//Lab_04_1
//Грушевський Іван

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, i;
    double S;

    cout << "N = "; cin >> N;
    
    

    //Solution 1
    S = 0;
    i = 1;
    while (i <= N && N > 0)
    {
        double d = static_cast<double>(i) / 
            static_cast<double>(N); 
        //cout << "d: " << d << endl;
        S += ( (1 + d)/pow(i, 2) );
        //cout << "S: " << S << endl;
        i++;
    }
    cout << S << endl;

    //Solution 2
    S = 0;
    i = 1;
    if (N>0) 
    {
        do {
            double d = static_cast<double>(i) / 
                static_cast<double>(N); 
            //cout << "d: " << d << endl;
            S += ( (1 + d)/pow(i, 2) );
            //cout << "S: " << S << endl;
            i++;
        }
        while (i <= N);
    }
    cout << S << endl;

    //Solution 3
    S = 0;
    for (i=1; i <= N && N > 0; i++)
    {
        double d = static_cast<double>(i) / 
            static_cast<double>(N); 
        //cout << "d: " << d << endl;
        S += ( (1 + d)/pow(i, 2) );
        //cout << "S: " << S << endl;
    }
    cout << S << endl;

    //Solution 4
    S = 0;
    for (i=N; i>=1 && N > 0; i--)
    {
        double d = static_cast<double>(i) / 
            static_cast<double>(N); 
        //cout << "d: " << d << endl;
        S += ( (1 + d)/pow(i, 2) );
        //cout << "S: " << S << endl;
    }
    cout << S << endl;

    return 0;
}
