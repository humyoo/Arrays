// Ex6.cpp 
#include <iostream>

using namespace std;

int main() {
    const int m = 4, n = 7;

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

    int min = a[0][0];
    int imin = 0;
    int jmin = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
                imin = i;
                jmin = j;
            }
        }
    }

    cout << "Мінімальний елемент у масиві має значення " << min << " і знаходиться в рядку " << imin + 1 << ", стовпці " << jmin + 1 << endl;


    for (int i = 0; i < m; i++) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}

