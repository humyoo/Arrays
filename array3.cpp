// array3.cpp

#include <iostream>
#include <ctime>
#include <cstdlib>

void fillArray(int arr[], int size) {
    srand(time(nullptr));
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100;
    }
}

void printArray(int arr[], int size) {

    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void swapMinMax(int arr[], int size) {

    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }


    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
}

int main() {
    const int size = 10; 
    int myArray[size];

    fillArray(myArray, size);

    std::cout << "Started array: ";
    printArray(myArray, size);

    swapMinMax(myArray, size);

    std::cout << "Array after replacement: ";
    printArray(myArray, size);

    return 0;
}

