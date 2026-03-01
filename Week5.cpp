#include <iostream>
#include <conio.h>
using namespace std;

class triangleArea { //redoing the code, but now with parameterised constructor
    private:
        float base;
        float height;
    public:
        triangleArea(float b, float h) {
            base = b;
            height = h;
        }
        float calculateArea() {
            return 0.5 * base * height;
        }
};

int main() {

    triangleArea t1(30, 20);
    t1.calculateArea();

    return 0;
}

//
/*class traverse {
    private:
        int arr[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    public:
        traverse(int x) {
            for(int i = x; i < 10; i++) {
                cout << arr[i] << endl;
            }
        }
};

int main () {

        traverse t1(0); //traverse from index 0 to 9
        traverse t2(5); //traverse from index 5 to 9

    return 0;
}*/

//Make a class with parametrised constructor in which a string is inputted and the string is reversed and displayed as output
class reverseString {
    private:
        string str;
    public:
        reverseString(string s) {
            str = s;
        }
        void displayReverse() {
            for(int i = str.length() - 1; i >= 0; i--) {
                cout << str[i];
            }
            cout << endl;
        }
};
