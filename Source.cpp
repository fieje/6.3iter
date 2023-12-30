#include <iostream>
#include <iomanip>

const int ARRAY_SIZE = 5;

void inputArrayRecursive(int arr[], int size, int index) {
    if (index < size) {
        std::cout << "Element " << index + 1 << ": " << std::endl;
        std::cin >> arr[index];
        inputArrayRecursive(arr, size, index + 1);
    }
}
void printArrayRecursive(const int arr[], int size, int index) {
    if (index < size) {
        std::cout << std::setw(5) << arr[index] << ' ';
        printArrayRecursive(arr, size, index + 1);
    }
    else {
        std::cout << std::endl;
    }
}
template <typename T>
void inputArrayRecursiveTemplate(T arr[], int size, int index = 0) {
    if (index < size) {
        std::cout << "Element " << index + 1 << ": " << std::endl;
        std::cin >> arr[index];
        inputArrayRecursiveTemplate(arr, size, index + 1);
    }
}

template <typename T>
void printArrayRecursiveTemplate(const T arr[], int size, int index = 0) {
    if (index < size) {
        std::cout << std::setw(5) << arr[index] << ' ';
        printArrayRecursiveTemplate(arr, size, index + 1);
    }
    else {
        std::cout << std::endl;
    }
}
int main() {
    int myArray[ARRAY_SIZE];

    inputArrayRecursive(myArray, ARRAY_SIZE,0);

    printArrayRecursive(myArray, ARRAY_SIZE,0);

    inputArrayRecursiveTemplate(myArray, ARRAY_SIZE);

    printArrayRecursiveTemplate(myArray, ARRAY_SIZE);


    return 0;
}
