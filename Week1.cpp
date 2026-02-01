#include <iostream>
#include <conio.h>
using namespace std;

int main() {

    //Print constant(pi) value
    const double pi = 3.14;
    printf("%.2f", pi);
    
    //Print Hello World
    cout << "Hello World!";

    //Grade calculation
    int marks;
    cout << "Enter marks (out of 100): ";
    cin >> marks;
    scanf("%d", &marks);
    switch (marks/10) {
        case 10:
            cout << "Grade: A+";
            break;
        case 9:
            cout << "Grade: A";
            break;
        case 8:
            cout << "Grade: B";
            break;
        case 7:
            cout << "Grade: C";
            break;
        case 6:
            cout << "Grade: D";
            break;
        default:
            cout << "Grade: F";
    }

    //Sum of positive numbers
    int n, num, sum = 0; //while (1)
    cout << "Enter no. of numbers: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i+1 << ": ";
        cin >> num;
        if (num > 0) {
            sum += num;
        }
    }
    cout << "Sum is: " << sum;

    //calculator for +, -, *, /
    char op;
    float num1, num2, result;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    switch (op) {
        case '+':
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result;
            break;
        case '-':
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result;
            break;
        case '*':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << num1 << " / " << num2 << " = " << result;
            } else {
                cout << "Error: Division by zero!";
            }
            break;
        default:
            cout << "Error: Invalid operator!";
            break;
    }

    return 0;
}