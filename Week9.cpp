#include <iostream>
using namespace std;

//Base class (Parent class)
/*class Animal {
    public:
        void eat() {
            cout << "Animal is eating" << endl;
        }
};
//Derived class (Child class)
class Dog : public Animal {
    public:
        void bark() {
            cout << "Dog is barking" << endl;
        }
};

int main() {
    Dog d;
    d.eat(); //Inherited from Animal
    d.bark(); //Dog's own function
    return 0;
}*/

//Multilevel inheritance
/*class Grandparent {
    public:
        void greetGrandparent() {
            cout << "Hello from Grandparent" << endl;
        }
};
class Parent : public Grandparent {
    public:
        void greetParent() {
            cout << "Hello from Parent" << endl;
        }
};
class Child : public Parent {
    public:
        void greetChild() {
            cout << "Hello from Child" << endl;
        }
};
int main() {
    Child c;
    c.greetGrandparent();
    c.greetParent();
    c.greetChild();
    return 0;
}*/

//Design Vehice Management System
/*class Vehicle {
    protected:
        string brand;
        int year;
    public:
        Vehicle(string b, int y) {
            brand = b;
            year = y;
        }
        void displayInfo() {
            cout << "Brand: " << brand << ", Year: " << year << endl;
        }   
};
class Car : public Vehicle {
    protected:
        string model;
        int seatingCapacity;
    public:
        Car(string b, int y, string m, int s) : Vehicle(b, y) {
            model = m;
            seatingCapacity = s;
        }
        void displayCarInfo() {
            displayInfo(); //Calling base class function
            cout << "Model: " << model << ", Seating Capacity: " << seatingCapacity << endl;
        }
};
class ElectricCar : public Car {
    protected:
        int batteryCapacity;
        int range;
    public:
        ElectricCar(string b, int y, string m, int s, int bt, int r) : Car(b, y, m, s) {
            batteryCapacity = bt;
            range = r;
        }
        void displayElectricCarInfo() {
            displayCarInfo(); //Calling base class function
            cout << "Battery Capacity: " << batteryCapacity << ", Range: " << range << endl;
        }
};
int main() {
    ElectricCar ec("Tesla", 2022, "Model S", 5, 100, 370);
    ec.displayElectricCarInfo();
    return 0;
}*/

//Multiple Inheritance
/*class Father {
    public:
        void fatherSkills() {
            cout << "Father's skills" << endl;
        }
};
class Mother {
    public:
        void motherSkills() {
            cout << "Mother's skills" << endl;
        }
};
class Child : public Father, public Mother {
    public:
        void childSkills() {
            cout << "Child's skills" << endl;
        }
};
int main() {
    Child c;
    c.fatherSkills();
    c.motherSkills();
    c.childSkills();
    return 0;
}*/

//1.
class Base {
    public:
        Base(int x) {
            cout << "Base constructor" << x <<endl;
        }
};
class Derived : public Base {
    public:
        Derived(int a, int b) : Base(a) {
            cout << "Derived constructor" << b << endl;
        }
};
int main() {
    Derived d(10, 20);
}

//2.
class Base {
    public:
        void show() {
            cout << "Base class function: " << endl;
        }
};
class Derived : public Base {
    public:
        void display() {
            cout << "Derived class function: " << endl;
        }
};
int main() {
    Base b;
    b.show();
    Derived d;
    d.show();
    d.display();
    return 0;
}

//3.
class Base {
    public:
        Base() {
            cout << "Base class default constructor called" << endl;
        }
};
class Derived : public Base {
    public:
        Derived() {
            cout << "Derived class default constructor called" << endl;
        }
};
int main() {
    Derived d;
    return 0;
}

//4.
class Base {
    public:
        Base(int x) {
            cout << "Base class constructor" << x <<endl;
        }
};
class Derived : public Base {
    public:
        Derived(int a) : Base(a) {
            cout << "Derived class constructor" << a << endl;
        }
};
int main() {
    Derived d(10);
    return 0;
}

//5.
class Base {
    public:
        Base(int x) {
            cout << "Base class constructor" << x <<endl;
        }
};
class Derived : public Base {
    public:
        Derived(int a) : Base(a) { //
            cout << "Derived class constructor" << endl;
        }
};
int main() {
    Base b(50);
    return 0;
}

//6.
class Base {
    public:
        int x;
        Base() {
            x = 100;
        }
};
class Derived : public Base {
    public:
        void display() {
            cout << "Inherited value of x = " << x << endl;
        }
};
int main() {
    Derived d;
    d.display();
    return 0;
}

//7.
class Base {
    public:
        void show(int x) {
            cout << "Value received in Base function: " << x << endl;
        }
};
class Derived : public Base {
};
int main() {
    Derived d;
    d.show(25);
    return 0;
}

//8.
class Base1{
    public:
        Base1() {
            cout << "Base1 default constructor called" << endl;
        }
};
class Base2 {
    public:
        Base2() {
            cout << "Base2 default constructor called" << endl;
        }
};
class Derived : public Base1, public Base2 {
    public:
        Derived() {
            cout << "Derived default constructor called" << endl;
        }
};
int main() {
    Derived d;
    return 0;
}

//this-> pointer
/*class MyClass {
    private:
        int value;
    public:
        MyClass(int v) {
            this->value = v; //Using this pointer to resolve naming conflict between member variable and constructor parameter
        }
        void display() {
            cout << "Value: " << this->value << endl; //Using this pointer to access member variable
        }
};
//In main function
int main() {
    MyClass obj(10); // Calls MyClass constructor with parameter 10, which initializes the member variable value to 10 using this pointer
    obj.display(); // Calls display function of MyClass, which uses this pointer to access the member variable value and prints "Value: 10"
    return 0;
}*/

