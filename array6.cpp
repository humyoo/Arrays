// array6.cpp 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size Array: ";
    cin >> n;

    int* a = new int[n];


    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100;
    }


    int i = 0;
    while (i < n && a[i] != 0) {
        i++;
    }


    if (i < n) {
        cout << "The first zero element is at position " << i << endl;
    }
    else {
        cout << "The array does not contain null elements" << endl;
    }

    delete[] a;
    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();
    return 0;
}

