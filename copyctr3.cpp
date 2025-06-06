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

// Destructor
    ~ArrayHolder() {
        cout << "Destructor freeing memory at " << arr << endl;
        delete[] arr;  // Free dynamically allocated memory
    }
};
int main() {
    ArrayHolder obj1(5);  // Create obj1 with size 5
    cout << "Original Object (obj1): ";
    obj1.display();

    ArrayHolder obj2 = obj1;  // Calls copy constructor
    cout << "Copied Object (obj2): ";
    obj2.display();
    obj2.setelement(0, 99);  // Modify obj2
    cout << "\nAfter modifying obj2:" << endl;
    cout << "obj1: ";
    obj1.display();
    cout << "obj2: ";
    obj2.display();

    return 0;
}

