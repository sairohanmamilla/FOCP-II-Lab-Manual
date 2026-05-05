#include <iostream>
using namespace std;

//Friend functions
//1.
class Student {
    private:
        int marks;
    public:
        Student() {
            marks = 85;
        }
        friend void show(Student s);
};
void show(Student s) {
    cout << "Marks: " << s.marks << endl;
}
int main() {
    Student s1;
    show(s1);
    return 0;
}

//2.
class Box {
    private:
        int length;
    public:
        Box(int l) {
            length = l;
        }
        friend void compare(Box b1, Box b2);
};
void compare(Box b1, Box b2) {
    if (b1.length > b2.length) {
        cout << "Box 1 is longer." << endl;
    } else if (b1.length < b2.length) {
        cout << "Box 2 is longer." << endl;
    } else {
        cout << "Both boxes have the same length." << endl;
    }
}
int main() {
    Box b1(10),b2(20);
    compare(b1, b2);
    return 0;
}

//3.
class B;
class A {
    private:
        int x;
    public:
        A() { x = 10; }
        friend void sum(A, B);
};
class B {
    private:
        int y;
    public:
        B() { y = 20; }
        friend void sum(A, B);
};
void sum(A a, B b) {
    cout << "Sum: " << a.x + b.y << endl;
}
int main() {
    A obj1;
    B obj2;
    sum(obj1, obj2);
    return 0;
}

//Function Overriding & Virtual Functions
//1.
class Base {
    public:
        void show() {
            cout << "Base class\n" << endl;
        }
};
class Derived : public Base {
    public:
        void show() {
            cout << "Derived class\n" << endl;
        }
};
int main() {
    Base* ptr; 
    Derived d;
    ptr = &d;
    ptr->show();
    return 0;
}

//2.
class Base {
    public:
        virtual void show() {
            cout << "Base class\n" << endl;
        }
};
class Derived : public Base {
    public:
        void show() override {
            cout << "Derived class\n" << endl;
        }
};
int main() {
    Base* ptr;
    Derived d;
    ptr = &d;
    ptr->show();
}

//Pointer array iteration with virtual functions
class Animal {
    public:
        virtual void sound() {
            cout << "Animal makes a sound\n";
        }
};
class Dog : public Animal {
    public:
        void sound() override {
            cout << "Woof!\n";
        }
};
class Cat : public Animal {
    public:
        void sound() override {
            cout << "Meow!\n";
        }
};
int main() {
    Animal* a[2];
    Dog d;
    Cat c;
    a[0] = &d;
    a[1] = &c;
    for (int i = 0; i < 2; i++) {
        a[i]->sound();
    }
    return 0;
}

//Final Keyword
class Base {
    public:
        virtual void show() final {
            cout << "Base class\n" << endl;
        }
};
class Derived : public Base {
    public:
        //void show() override { //Error: Cannot override a final function, as the show function in the Base class is declared as final, so it cannot be overridden in the Derived class, and any attempt to override it will result in a compilation error.
            //cout << "Derived class\n" << endl;
        //}
};
int main() {
    Base* ptr;
    Derived d;
    ptr = &d;
    ptr->show();
    return 0;
}

//Const Keyword
class A {
    private:
        int x;
    public:
        A(int val) : x(val) {}
        void display() const { //Const member function - indicates that the function does not modify the state of the object and can be called on const objects
            cout << "Value of x: " << x << endl;
        }
};
int main() {
    A obj(10);
    obj.display();
    return 0;
}

//Abstract Classes and Pure Virtual Functions
class A {
    public:
        virtual void show() = 0;
};
int main() {
    //A obj; //Error: Cannot instantiate an abstract class
    return 0;
}

//Operator Overloading
class Box {
    public:
        int weight;
        Box(int w) : weight(w) {}
        Box operator+(const Box& other) {
            return Box(weight + other.weight);
        }
};
int main() {
    Box b1(10), b2(20);
    Box b3 = b1 + b2;
    cout << "Weight of Box 3: " << b3.weight << endl;
    return 0;
};
