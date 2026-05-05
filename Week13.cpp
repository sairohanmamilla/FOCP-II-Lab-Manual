#include <iostream>
using namespace std;

//Array of Objects
class Student {
    public:
        string name;
        int age;
        void display() {
            cout << "Name: " << name << ", Age: " << age << endl;
        }
};
int main() {
    Student s[3];
    s[0].name = "Alice";
    s[0].age = 20;
    s[1].name = "Rahul";
    s[1].age = 22;
    s[2].name = "Priya";
    s[2].age = 21;
    for (int i = 0; i < 3; i++) {
        s[i].display();
    }
    return 0;
}

//Constructor calls in Array of Objects
int main() {
    Student s1[2];
    cout << "Default Constructor Values:\n";
    for (int i = 0; i < 2; i++) {
        s1[i].display();
    }
    cout << endl;
    Student s2[2] = {
        Student("Aman", 20),
        Student("Riya", 21)
    };
    cout << "Parameterised Constructor Values:\n";
    for (int i = 0; i < 2; i++) {
        s2[i].display();
    }
    return 0;
}

//Operator Overloading continued...
class Number {
    public:
        int value;
        Number(int v) {
            value = v;
        }

    friend Number operator+(Number, Number);
};
Number operator+(Number n1, Number n2) {
    return Number(n1.value + n2.value);
}
int main() {
    Number n1(10), n2(20);
    Number n3 = n1 + n2;
    cout << n3.value;
}

//New and delete
//1.
int main() {
    int n;
    cout << "Enter size of array ";
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++) arr[i]= i + 1;
    for(int i = 0; i < n; i++) cout << arr[i] << endl;
    delete[] arr;
}

//2.
int main() {
    Student* s1 = new Student;
    s1->marks = 90;
    cout << "Marks: " << s1->marks << endl;
    delete s1;
}

