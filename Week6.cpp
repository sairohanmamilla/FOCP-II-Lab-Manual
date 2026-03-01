#include <iostream>
#include <conio.h>
using namespace std;

//Scope resolution operator - used to define member functions outside the class definition and to access static members of a class
    int x = 100; //global variable
    int main() {
        int x = 50; //local variable with same name as global variable
        cout << "Local x: " << x << endl; //Accessing global variable
        cout << "Global x: " << ::x << endl; //Accessing global variable using scope resolution operator
        return 0;
    }

    class Person {
        private:
            string name;
            int age;
        public:
            Person(string n, int a) { //constructor
                name = n;
                age = a;
                cout << "Constructor called for " << name << endl;
            }
            void display() {
                cout << "Name: " << name << ", Age: " << age << endl;
            }
            ~Person() { //destructor
                cout << "Destructor called for " << name << endl;
            }
    };

    //Global object - created outside of any function, accessible from anywhere in the program, and has a lifetime that lasts for the duration of the program
    Person globalPerson("Global User", 40);

    int main() {
        cout << "Inside main function\n";

        Person localPerson("John", 20); //Local object - created inside a function, accessible only within that function, and has a lifetime that lasts until the function exits
        localPerson.display();
        return 0;
    }

    class ...{
        public:
            void setName(string n);
    };
    void ...::setName(string n) { //defining member function outside the class definition using scope resolution operator
        name = n;
    }

    //abstraction
    //polymorphism

    //wap to find area of triangle using constructor overloading
    class triangleArea {
        private:
            float base;
            float height;
        public:
            triangleArea() {
                base = 0;
                height = 0;
            }
            triangleArea(float b, float h) {
                base = b;
                height = h;
            }
            triangleArea(float s) { //equilateral triangle
                base = s;
                height = (sqrt(3)/2) * s;
            }
    };

    //library management system using oop
    // book name, book id, issuer, roll number
    class libM {
        private:
            string bookName;
            int bookId;
            string issuer;
            string rollNum;
        public:
            libM(string bN, int bI, string iss, string rN) {
                bookName = bN;
                bookId = bI;
                issuer = iss;
                rollNum = rN;
            } //array traversal and reversing a string
            void update() {}
            void view() {}
            void dueToday() {}
    };
