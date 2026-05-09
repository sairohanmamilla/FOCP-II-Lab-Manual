#include <iostream>
using namespace std;
#include <stdexcept>

//Exception Handling in C++
// try, catch, throw, exception
int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    try
    {
        if (num2 == 0)
        {
            throw runtime_error("Division by zero is not allowed."); // throw an exception
        }
        float result = num1 / num2; // perform division
        cout << "Result: " << result << endl;
    }
    catch (const runtime_error& e) // catch the exception
    {
        cout << "Error: " << e.what() << endl; // print the error message
    }

    return 0;
}