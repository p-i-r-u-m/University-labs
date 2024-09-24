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
    if (!b) {
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

    for (int p = 0; p <= 1; p++) {
        
        

        for (int q = 0; q <= 1; q++) {
            
            

            for (int r = 0; r <= 1; r++) {
                
                // 1st Block

                int result_1 = conq(r, p);
                int result_2 = neg(result_1);

                int result_3 = neg(q);
                int result_4 = impl(p, result_3);

                int first_block_result = equal(result_2, result_4);

                // 2nd Block
                
                int result_6 = neg(r);
                int result_7 = conq(p, result_6);
                int result_8 = neg(result_7);

                int result_9 = neg(r);
                int result_10 = donq(q, result_9);

                int second_block_result = equal(result_8, result_10);

                // Final result
                int final_result = donq(first_block_result, second_block_result);
                
                cout << "_____________________" << endl;
                cout << "| p | q | r | Final |" << endl;
                cout << "---------------------" << endl;
                cout << "| " << p << " | " << q << " | " << r << " |   " << final_result << "   |" << endl;
                cout << "_____________________" << endl;

                cout << "\n \n" << " - - - Wizard - - - "<< "\n \n" << endl;
                
                cout << "__ BLOCK 1 __" << endl;

                cout << "\nResult 1: " << result_1 << endl;
                cout << "Result 2: " << result_2 << endl;
                cout << "Result 3: " << result_3 << endl;
                cout << "Result 4: " << result_4 << endl;
                cout << "\nFirst Block result: " << first_block_result << endl;

                cout << "\n__ BLOCK 2 __" << endl;
                cout << "\nResult 6: " << result_6 << endl;
                cout << "Result 7: " << result_7 << endl;
                cout << "Result 8: " << result_8 << endl;
                cout << "Result 9: " << result_9 << endl;
                cout << "Result 10: " << result_10 << endl;
               cout << "\nSecond Block result: " << second_block_result << "\n- - - - - - - - - - - -\n" << endl;

            }

        }
       
    }

    cout << "- - END - -" << endl;

    return 0;
}


