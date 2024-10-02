#include <iostream>

using namespace std;

int depth = 0;

int A(int m, int n)
{
    depth++;

    if (m == 0)
        return(n+1);
    else if (m > 0 && n == 0)
        return A(m-1, 1);
    else
        return A(m-1, A(m, n-1));
}

int main()
{
    int m, n;

    cout << "m = "; cin >> m;
    cout << "n = "; cin >> n;
    
    cout << "A:" << A(m, n) << endl;
    cout << "Depth: " << depth << endl;

    return 0;
}
