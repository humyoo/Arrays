// array5.cpp 

#include <iostream>

#include <ctime>

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


    int max = a[0], sec_max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            sec_max = max;
            max = a[i];
        }
        else if (a[i] > sec_max) {
            sec_max = a[i];
        }
    }

    cout << "Second in size element: " << sec_max << endl;

    delete[] a;
    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();
    return 0;
}
