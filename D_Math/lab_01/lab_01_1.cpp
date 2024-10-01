#include <iostream>
using namespace std;

// Заперечення 
int neg(int a){
    if (a) {
        return 0;  // return 1 if a is 0
    } else {
        return 1;  // return 0 if a is not 0
    }
}

// Конюкція (оператор "і")  a ^ b
int conq(int a, int b) {
    if ( a && b) {
        return 1;
    }
    else {
        return 0;
    }
}

// Диз'юнкція (операція "або") a \/ b
int donq(int a, int b) {
    if  ( a || b) {
        return 1;
    }
    else {
        return 0;
    }
}

// Альтернативне АБО  a o b
int alt_donq(int a, int b) {
    if (a == b) {
        return 0;
    }
    else {
        return 1;
    }
}

// Імплікація (" якщо, то ")  a -> b
int impl(int a, int b) {
    // a -> b
    if (a == 1 && b == 0) {
        return 0;
    }
    else {
        return 1;
    }
}

//Еквівалентність a~b
int equal(int a, int b) {
    if (a == b) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    cout << "_______________________________" << endl;
    cout << "| A | M | T | Z | B | result  |" << endl;
    cout << "-------------------------------" << endl;
 
    for (int A = 0; A <= 1; A++) {
        
        for (int M = 0; M <= 1; M++) {
            
            for (int T = 0; T <= 1; T++) {
         
                for (int Z = 0; Z <= 1; Z++){

                    for (int B = 0; B <= 1; B++)
                    {
                        int r1 = donq(A,M);
                        int r2 = impl(r1, Z);
                        int r3 = neg(Z);
                        int r4 = conq(r3, B);
                        int r5 = impl(T, r4);
                        int r6 = conq(r2, r5);
                        int r7 = conq(r6, r3);

                        int result = impl(r7, T);

                        cout << "| " << A << " | " << M << " | " << T << " | " << Z 
                            << " | " << B << " |    " << result << "    |" << endl;
                        cout << "-------------------------------" << endl;
                    }
                }
            }
        }
    }

    return 0;
}
