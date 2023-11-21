// Ex4.cpp 

#include <iostream>

using namespace std;

int main() {
    const int m = 4, n = 6;


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

  
    int sum[n];
    for (int j = 0; j < n; j++) {
        sum[j] = 0;
        for (int i = 0; i < m; i++) {
            sum[j] += a[i][j];
        }
    }


    for (int j = 0; j < n; j++) {
        cout << "Сума елементів стовпчика " << j + 1 << ": " << sum[j] << endl;
    }


    for (int i = 0; i < m; i++) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}