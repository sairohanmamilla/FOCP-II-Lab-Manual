#include <iostream>
using namespace std;

//Scope Resolution Operator in Classes
class A {
    public:
        void display() {
            cout << "From Class A\n";
        }
};
class B {
    public:
        void display() {
            cout << "From Class B\n";
        }
};
class C : public A, public B {
    public:
        void show() {
            cout << "From Class C\n";
        }
};
int main() {
    C obj;
    obj.display();
    obj.A::display();
    obj.B::display();
    obj.show();

    return 0;
}

//Hierarchical Inheritance
class A {
    public:
        void base() {
            cout << "Base class A\n";
        }
};
class B : public A {
    public:
        void childB() {
            cout << "Derived class B\n";
        }
};
class C : public A {
    public:
        void childC() {
            cout << "Derived class C\n";
        }
};
int main() {
    B obj1;
    C obj2;
    obj1.base();
    obj1.childB();
    obj2.base();
    obj2.childC();
    return 0;
}

//Hybrid Inheritance
class A {
    public:
        void showA() {
            cout << "Class A\n";
        }
};
class B : public A {
    public:
        void showB() {
            cout << "Class B\n";
        }
};
class C {
    public:
        void showC() {
            cout << "Class C\n";
        }
};
class D : public B, public C {
    public:
        void showD() {
            cout << "Class D\n";
        }
};
int main() {
    D obj;
    obj.showA();
    obj.showB();
    obj.showC();
    obj.showD();
    return 0;
}

//Static Variable
void counter() {
    static int count = 0;
    count++;
    cout << "Count: " << count << endl;
}
int main() {
    counter();
    counter();
    counter();
    return 0;
}

//Static Member Variable in a Class
class Box {
    int length;
    public:
        static int objectCount;
        Box(int l) {
            length = l;
            objectCount++;
        }
        void printLength() { cout << length << endl; }
};
int Box::objectCount = 0;
int main() {
    Box b1(5), b2(10), b3(15);
    cout << "Number of objects created: " << Box::objectCount << endl;
    return 0;
}

