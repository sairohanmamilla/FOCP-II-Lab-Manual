#include <iostream>
using namespace std;

//Destructor Sequence in Inheritance
class A {
    public:
        A() {cout << "Constructor of A" << endl;}
        ~A() {cout << "Destructor of A" << endl;}
};
class B : public A {
    public:
        B() {cout << "Constructor of B" << endl;}
        ~B() {cout << "Destructor of B" << endl;}
};
int main() {
    B obj;
    return 0;
}

//Destructor Sequence in Multiple Inheritance
class A {
    public:
        A() {cout << "Constructor of A" << endl;}
        ~A() {cout << "Destructor of A" << endl;}
};
class B {
    public:
        B() {cout << "Constructor of B" << endl;}
        ~B() {cout << "Destructor of B" << endl;}
};
class C : public A, public B {
    public:
        C() {cout << "Constructor of C" << endl;}
        ~C() {cout << "Destructor of C" << endl;}
};
int main() {
    C obj;
    return 0;
}

//Diamond Problem
class A {
    public:
        void show() {
            cout << "Hello from A" << endl;
        }
};
class B : public A {
};
class C : public A {
};
class D : public B, public C {
};
int main() {
    D obj;
    obj.B::show();
    obj.C::show();
    return 0;
}

//Q-1 Vehicle Rental System
class Vehicle {
    private: //how to decide when to put data members as private or public? - Data members should generally be declared as private to encapsulate the internal state of the class and prevent direct access from outside the class, which can help maintain data integrity and control how the data is accessed and modified. Public member functions can be provided to allow controlled access to the private data members, ensuring that any necessary validation or logic can be applied when accessing or modifying the data.
        string vehicleNumber;
        int rentalPrice;
    public:
        Vehicle(string number, int price) { //is making constructor necessary in a question? - It depends on the requirements of the question. If the question specifies that a constructor should be implemented to initialize the data members of the class, then it is necessary to include a constructor. However, if the question does not explicitly require a constructor, it may not be necessary to include one, and you can choose to initialize the data members using other methods such as setter functions or directly in the main function. It is important to carefully read and understand the requirements of the question to determine whether a constructor is necessary or not.
            vehicleNumber = number;
            rentalPrice = price;
        }
        void displayDetails() {
            cout << "Vehicle Number: " << vehicleNumber << endl;
            cout << "Rental Price: " << rentalPrice << endl;
        }
};
class Car : public Vehicle {
    private:
        int numberofSeats;
        string carType;
    public:
        Car(string number, int price, int seats, string type) : Vehicle(number, price) { //remember that data type is not necessary when calling the base class constructor
            numberofSeats = seats;
            carType = type;
        }
};

//Q-2 College Staff Management
class Person {
    private:
        string name;
        int age;
    public:
        Person(string n, int a) {
            name = n;
            age = a;
        }
};
class Employee : public Person {
    private:
        string employeeID;
        string department;
    public:
        Employee(string n, int a, string id, string dept) : Person(n, a) {
            employeeID = id;
            department = dept;
        }
};
class Faculty : public Employee {
    private:
        string subject;
        string designation;
    public:
        Faculty(string n, int a, string id, string dept, string sub, string desig) : Employee(n, a, id, dept) {
            subject = sub;
            designation = desig;
        }
};

//Q-3 Library Management System
class Book {
    private:
        string title;
        string author;
    public:
        Book(string t, string a) {
            title = t;
            author = a;
        }
        void displayDetails() {
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
        }
};
class EBook : public Book {
    private:
        int fileSize;
    public:
        EBook(string t, string a, int size) : Book(t, a) {
            fileSize = size;
        }
};
class PrintedBook : public Book {
    private:
        int pageCount;
    public:
        PrintedBook(string t, string a, int pages) : Book(t, a) {
            pageCount = pages;
        }
};

//Q-4 Student Grading System - in this we put data members in public, otherwise the display function will give an error, so we put in private. What if we put in protected? - If we put the data members in protected, they will be accessible within the class and its derived classes, but not from outside the class. In this case, the display function will still be able to access the protected data members and display their values without any error. However, if we try to access the protected data members directly from the main function or any other non-member function, it will result in an error because protected members cannot be accessed from outside the class hierarchy. Therefore, using protected access specifier allows for controlled access to the data members while still providing encapsulation and preventing direct access from outside the class. Will we write :public or :protected? - In this case, we will write :public when defining the Result class that inherits from Student and Exam, because we want to allow access to the public members of the Student and Exam classes from the Result class. If we were to write :protected, then the public members of Student and Exam would become protected members of Result, which would restrict access to them from outside the Result class and its derived classes. Therefore, using :public allows us to maintain the accessibility of the inherited members while still providing encapsulation and control over how they are accessed.
class Student {
    public:
        string name;
        int rollNumber;
        Student(string n, int r) {
            name = n;
            rollNumber = r;
        }
};
class Exam {
    public:
        string subject;
        int marks;
        Exam(string s, int m) {
            subject = s;
            marks = m;
        }
};
class Result : public Student, public Exam {
    public:
        Result(string n, int r, string s, int m) : Student(n, r), Exam(s, m) {
        }
        void displayResult() {
            cout << "Name: " << name << endl;
            cout << "Roll Number: " << rollNumber << endl;
            cout << "Subject: " << subject << endl;
            cout << "Marks: " << marks << endl;
        }
};

//Q-5 Vehicle Management System
class Vehicle {
    protected:
        string vehicleNumber;
        int rentalPrice;
    public:
        Vehicle(string number, int price) {
            vehicleNumber = number;
            rentalPrice = price;
        }
};
class Car : public Vehicle {
    private:
        int numberOfSeats;
    public:
        Car(string number, int price, int seats) : Vehicle(number, price) {
            numberOfSeats = seats;
        }
};
class Truck : public Vehicle {
    private:
        int loadCapacity;
    public:
        Truck(string number, int price, int capacity) : Vehicle(number, price) {
            loadCapacity = capacity;
        }
};
class RentalCar : public Car {
    private:
        string carType;
    public:
        RentalCar(string number, int price, int seats, string type) : Car(number, price, seats) {
            carType = type;
        }
};