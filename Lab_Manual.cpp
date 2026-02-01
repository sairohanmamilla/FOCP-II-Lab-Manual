#include <iostream>
#include <conio.h>
using namespace std;

int main() {

//Q-1
    float mark1, mark2, mark3;
    cout << "Enter marks of three students: ";
    cin >> mark1 >> mark2 >> mark3;
    float average = (mark1 + mark2 + mark3) / 3;
    cout << "The average marks of the three students is: " << average << endl;

//Q-2
    const float PI = 3.14;
    float radius;
    cout << "Enter the radius of the circular fountain: ";
    cin >> radius;
    float area = PI * radius * radius;
    cout << "The area covered by the circular fountain is: " << area << endl;

//Q-3
    float tempF;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> tempF;
    float tempC = (tempF - 32) * 5 / 9;
    cout << "The temperature in Celsius is: " << tempC << endl;

//Q-4
    int itemNo, quantity;
    float unitPrice;
    cout << "Enter item number, quantity, and unit price: ";
    cin >> itemNo >> quantity >> unitPrice;
    float totalAmount = quantity * unitPrice;
    float discount = totalAmount * 0.20;
    float finalAmount = totalAmount - discount;
    cout << "The final bill amount after 20% discount is: " << finalAmount << endl;

//Q-5
    int a, b;
    cout << "Enter two numbers to swap: ";
    cin >> a >> b;
    // Using a temporary variable
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping using temporary variable: a = " << a << ", b = " << b << endl;
    // Using arithmetic operations
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping using arithmetic operations: a = " << a << ", b = " << b << endl;
    // Using bitwise XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "After swapping using bitwise XOR: a = " << a << ", b = " << b << endl;

//Q-6
    int numEmployees;
    cout << "Enter the number of employees: ";
    cin >> numEmployees;
    for (int i = 1; i <= numEmployees; i++) {
        float basicSalary;
        cout << "Enter basic salary for employee " << i << ": ";
        cin >> basicSalary;
        float bonus = basicSalary * 0.12;
        float netSalary = basicSalary + bonus;
        cout << "Employee " << i << " - Bonus: " << bonus << ", Net Salary: " << netSalary << endl;
    }

//Q-7
    int score1, score2, score3;
    cout << "Enter scores of three players: ";
    cin >> score1 >> score2 >> score3;
    if (score1 > score2 && score1 > score3) {
        cout << "Player 1 is ahead with score: " << score1 << endl;
    } else if (score2 > score1 && score2 > score3) {
        cout << "Player 2 is ahead with score: " << score2 << endl;
    } else if (score3 > score1 && score3 > score2) {
        cout << "Player 3 is ahead with score: " << score3 << endl;
    } else {
        cout << "It's a tie!" << endl;
    }

//Q-8
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    for (int eventID = 1; eventID <= N; eventID++) {
        if (eventID % 3 == 0 && eventID % 5 == 0) {
            cout << "Event ID " << eventID << ": Buzz Fuzz" << endl;
        } else if (eventID % 3 == 0) {
            cout << "Event ID " << eventID << ": Buzz" << endl;
        } else if (eventID % 5 == 0) {
            cout << "Event ID " << eventID << ": Fuzz" << endl;
        } else {
            cout << "Event ID " << eventID << ": No Tag" << endl;
        }
    }

//Q-9
    char symbol;
    cout << "Enter a single character: ";
    cin >> symbol;
    if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z')) {
        char lowerSymbol = tolower(symbol);
        if (lowerSymbol == 'a' || lowerSymbol == 'e' || lowerSymbol == 'i' || lowerSymbol == 'o' || lowerSymbol == 'u') {
            cout << symbol << " is a Vowel." << endl;
        } else {
            cout << symbol << " is a Consonant." << endl;
        }
    } else if (symbol >= '0' && symbol <= '9') {
        cout << symbol << " is a Number." << endl;
    } else {
        cout << symbol << " is neither a Vowel, Consonant, nor a Number." << endl;
    }

//Q-10
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a Leap Year." << endl;
    } else {
        cout << year << " is not a Leap Year." << endl;
    }

    return 0;
}
