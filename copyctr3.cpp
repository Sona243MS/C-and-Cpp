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


