// Ex15.cpp 
#include <iostream>

using namespace std;

int main() {
    const int m = 3, n = 3;

    int** a = new int* [m];
    for (int i = 0; i < m; i++) {
        a[i] = new int[n];
    }

    srand(time(NULL));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 100;
        }
    }

    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < m; i++) {
        sum1 += a[i][i];
        sum2 += a[i][m - i - 1];
    }

    cout << "Сума чисел по головній діагоналі: " << sum1 << endl;
    cout << "Сума чисел по побічній діагоналі: " << sum2 << endl;

    for (int i = 0; i < m; i++) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}




