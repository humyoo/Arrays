// Ex2.cpp 

#include <iostream>

using namespace std;

int main() {
    const int m = 6, n = 4;


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


    int count[n];
    for (int j = 0; j < n; j++) {
        count[j] = 0;
        for (int i = 0; i < m; i++) {
            if (a[i][j] % 2 == 0) {
                count[j]++;
            }
        }
    }


    for (int j = 0; j < n; j++) {
        cout << "У стовпчику " << j + 1 << " кількість парних чисел: " << count[j] << endl;
    }


    for (int i = 0; i < m; i++) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}