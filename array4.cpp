// array4.cpp 

#include <iostream>

using namespace std;

int main() {

    int A;
    cout << "Enter number A: ";
    cin >> A;


    int n;
    cout << "Enter size Array: ";
    cin >> n;


    int* arr = new int[n];
    cout << "Enter element Array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }


    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > A) {
            count++;
        }
    }


    cout << "The amount of elements is greater than " << A << ": " << count << endl;


    delete[] arr;
    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();

    return 0;
}

