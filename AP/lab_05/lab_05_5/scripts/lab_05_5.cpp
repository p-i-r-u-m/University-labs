
#include <iostream>

using namespace std;

int maxDepth = 0;

int A(int m, int n, int level) {

    if (level > maxDepth) {
        maxDepth = level;
    }

    cout << "Рівень рекурсії: " << level << ", m: " << m << ", n: " << n << endl;

    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return A(m - 1, 1, level + 1);
    } else {
        int result = A(m, n - 1, level + 1); // Проміжний результат
        return A(m - 1, result, level + 1);
    }
}

int main() {
    int m, n;

    cout << "m = "; cin >> m;
    cout << "n = "; cin >> n;
    
    int result = A(m, n, 1); // Отримуємо результат
    cout << "Результат A(" << m << ", " << n << "): " << result << endl;
    cout << "Максимальна глибина рекурсії: " << maxDepth << endl;
 
    cout << "TEST";
    return 0;
}
