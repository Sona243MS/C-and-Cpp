#include<iostream>
using namespace std;

class ArrayHolder {
private:
    int *arr;  // Should be a pointer to dynamically allocated array
    int size;
public:
    // Constructor (fixed)
    ArrayHolder(int s) {  // Takes only size, not value
        size = s;
        arr = new int[s];  // Correctly allocate memory
        for (int i = 0; i < s; ++i) {
            arr[i] = i + 1;  // Initialize array elements
        }
        cout << "Constructor: Array at " << arr << endl;
    }

 // Copy Constructor (Deep Copy)
    ArrayHolder(const ArrayHolder &other) {
        size = other.size;
        arr = new int[size];  // Allocate new memory
        for (int i = 0; i < size; ++i) {
            arr[i] = other.arr[i];  // Copy elements
        }
        cout << "Copy Constructor: Array at " << arr << endl;
    }

   // Display function
    void display() {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

// Modify array element
    void setelement(int index, int value) {
        if (index >= 0 && index < size)
            arr[index] = value;
    }


