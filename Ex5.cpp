// Ex5.cpp 

#include <iostream>

using namespace std;

int main() {
    const int m = 3, n = 4;

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

    int max = a[0][0];
    int imax = 0;
    int jmax = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                imax = i;
                jmax = j;
            }
        }
    }


    cout << "Максимальний елемент у масиві має значення " << max << " і знаходиться в рядку " << imax + 1 << ", стовпці " << jmax + 1 << endl;

    for (int i = 0; i < m; i++) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}
