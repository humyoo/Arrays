// Two-dimensional.cpp ex1

#include <iostream>

using namespace std;

int main() {
    int m = 4, n = 3;


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

    for (int i = 0; i < m; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[i][j] % 2 == 0) {
                count++;
            }
        }
        cout << "In line " << i + 1 << " amount even numbers: " << count << endl;
    }


    for (int i = 0; i < m; i++) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}