#include <iostream>
using namespace std;

int* createAndUseArray(int size) {
    int* arr = new int[size];  // Manual dynamic allocation
    for (int i = 0; i < size; i++) {
        arr[i] = i;  // Direct pointer access
    }
    return arr;  // Pointer returned, ownership unclear
}

int main() {
    int size = 5;
    int* array = createAndUseArray(size);
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    delete[] array;  // Manual deallocation required
    // array = nullptr;  // Optional to prevent dangling pointer
    return 0;
}