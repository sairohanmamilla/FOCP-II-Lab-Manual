#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;
#include <string>

int main() {
    
    vector<int> v; //dynamic array

    // Add elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // Print elements
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    //or
   for (int x : v) {
        cout << x << " ";
        cout << endl;
    }

    // Size of vector
    cout << "Size of vector: " << v.size() << endl;

    // Access first and last elements
    cout << "First element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;

    // Access element at specific index
    cout << "Element at index 1: " << v.at(1) << endl;

    // Remove last element
    v.pop_back();
    cout << "After pop_back: ";
    for (int x : v) {
        cout << x << " " << endl;
    }

    // Check if vector is empty
    if (v.empty()) {
        cout << "Vector is empty" << endl;
    } else {
        cout << "Vector is not empty" << endl;
    }

    //Clear all elements
    v.clear();

    //User-defined functions - same as C



    return 0;
}