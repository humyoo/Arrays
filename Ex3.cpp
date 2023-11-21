// Ex3.cpp 

#include <iostream>

using namespace std;

int main() {
    const int m = 5, n = 7;


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


    int sum[m];
    for (int i = 0; i < m; i++) {
        sum[i] = 0;
        for (int j = 0; j < n; j++) {
            sum[i] += a[i][j];
        }
    }


    for (int i = 0; i < m; i++) {
        cout << "Сума елементів рядка " << i + 1 << ": " << sum[i] << endl;
    }

 
    for (int i = 0; i < m; i++) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}