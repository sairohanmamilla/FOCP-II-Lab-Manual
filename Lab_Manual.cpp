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

    return 0;
}