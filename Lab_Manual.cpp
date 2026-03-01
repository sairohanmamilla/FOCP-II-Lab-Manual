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
    cout << "The final bill amount after 20%% discount is: " << finalAmount << endl;

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

//Q-11
    int orderQuantity;
    float unitCost;
    cout << "Enter order quantity and unit cost: ";
    cin >> orderQuantity >> unitCost;
    float totalCost = orderQuantity * unitCost;
    if (orderQuantity > 1000) {
        float discount = totalCost * 0.10;
        totalCost -= discount;
        cout << "A discount of " << discount << " has been applied." << endl;
    }
    cout << "Total expenses: " << totalCost << endl;
    getch();
    
//Q-12
    float side1, side2, side3;
    cout << "Enter the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;
    if (side1 == side2 && side2 == side3) {
        cout << "The triangle is equilateral." << endl;
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        cout << "The triangle is isosceles." << endl;
    } else {
        cout << "The triangle is scalene." << endl;
    }

//Q-13
    #include <math.h>
    int a, b, c;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    float discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        cout << "The equation has no real roots." << endl;
    } else {
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are: " << root1 << " and " << root2 << endl;
    }

//Q-14
    int choice;
    do {
        cout << "Menu:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\nEnter your choice: ";
        cin >> choice;
        if (choice >= 1 && choice <= 4) {
            float num1, num2;
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            switch (choice) {
                case 1:
                    cout << "Result: " << num1 + num2 << endl;
                    break;
                case 2:
                    cout << "Result: " << num1 - num2 << endl;
                    break;
                case 3:
                    cout << "Result: " << num1 * num2 << endl;
                    break;
                case 4:
                    if (num2 != 0) {
                        cout << "Result: " << num1 / num2 << endl;
                    } else {
                        cout << "Error: Division by zero!" << endl;
                    }
                    break;
            }
        } else if (choice != 5) {
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);
    
//Q-15
    int n;
    float salesFigure, maxSales;
    cout << "Enter the number of sales entries: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter sales figure " << (i + 1) << ": ";
        cin >> salesFigure;
        if (i == 0 || salesFigure > maxSales) {
            maxSales = salesFigure;
        }
    }
    cout << "The maximum sales figure is: " << maxSales << endl;

//Q-16
    int n;
    bool isPrime = true;
    cout << "Enter a number to check if it is prime: ";
    cin >> n;
    if (n <= 1) {
        isPrime = false;
    } 
    else {
        for (int i = 2; i <= n / 2; i++) { 
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

//Q-17
    #include <math.h>
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int originalNumber = n;
    int numOfDigits = 0;
    int temp = n;
    while (temp > 0) {
        numOfDigits++;
        temp /= 10;
    }
    int sumOfDigits = 0;
    while (n > 0) {
        int digit = n % 10;
        sumOfDigits += round(pow(digit, numOfDigits));
        n /= 10;
    }
    if (sumOfDigits == originalNumber) {
        cout << originalNumber << " is an Armstrong number." << endl;
    } else {
        cout << originalNumber << " is not an Armstrong number." << endl;
    }
    bool isPerfect = false;
    if (n > 1) {
        int sumOfDivisors = 1;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                sumOfDivisors += i;
                if (i * i != n) {
                    sumOfDivisors += n / i;
                }
            }
        }
        if (sumOfDivisors == n) {
                cout << n << " is a Perfect number." << endl;
            } else {
                cout << n << " is not a Perfect number." << endl;
            }
    }
    
//Q-18
    string id;
    cout << "Enter ID to check: ";
    cin >> id;
    bool isPalindrome = true;
    int len = id.length();
    for(int i = 0; i < len / 2; i++) {
        if(id[i] != id[len - 1 - i]) {
            isPalindrome = false;
            break; 
        }
    }
    if(isPalindrome) {
        cout << id << " is a valid palindrome ID.\n";
    } else {
        cout << id << " is not a palindrome.\n";
    }

//Q-19
    int start, end;
    cout << "Enter the start and end of the range: ";
    cin >> start >> end;
    cout << "Prime numbers between " << start << " and " << end << ":\n";
    for(int num = start; num <= end; num++) {
        if(num <= 1) continue;
        bool isPrime = true;
        for(int i = 2; i * i <= num; i++) {
            if(num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) {
            cout << num << " ";
        }
    }
    cout << "\n";

//Q-20
    for(int i = 0; i < 3; i++) {
        for(int j = 1; j <= 5; j++) {
            cout << j;
        }
        cout << "\n";
    }

//Q-20
    for(int i = 1; i <= 5; i++) {
        for(int j = 5; j >= i; j--) {
            cout << j;
        }
        cout << "\n";
    }

//Q-21
    int rows = 8, cols = 8;
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= cols; j++) {
            if(i == 1 || i == rows || j == 1 || j == cols) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << "\n";
    }

//Q-22
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = i; j < n; j++) cout << " ";
        for(int j = 1; j <= (2 * i - 1); j++) {
            if(j == 1 || j == (2 * i - 1)) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
    for(int i = n - 1; i >= 1; i--) {
        for(int j = n; j > i; j--) cout << " ";
        for(int j = 1; j <= (2 * i - 1); j++) {
            if(j == 1 || j == (2 * i - 1)) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }

//Q-23
    int n = 5;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= i; j++) cout << "*";
            int spaces = 2 * (n - i);
            for(int j = 1; j <= spaces; j++) cout << " ";
            for(int j = 1; j <= i; j++) cout << "*";
            cout << "\n";
        }
        for(int i = n - 1; i >= 1; i--) {
            for(int j = 1; j <= i; j++) cout << "*";
            int spaces = 2 * (n - i);
            for(int j = 1; j <= spaces; j++) cout << " ";
            for(int j = 1; j <= i; j++) cout << "*";
            cout << "\n";
        }

//Q-24
    for(int i = 1; i <= 5; i++) {
        char ch = 'A';
        for(int j = 1; j <= i; j++) {
            cout << ch;
            ch++;
        }
        cout << "\n";
    }

//Q-25
    string password;
    cout << "Enter a password to validate: ";
    cin >> password;
    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;
    for(int i = 0; i < password.length(); i++) {
        char c = password[i];
        if(c >= 'A' && c <= 'Z') {
            hasUpper = true;
        } else if(c >= 'a' && c <= 'z') {
            hasLower = true;
        } else if(c >= '0' && c <= '9') {
            hasDigit = true;
        } else if(c == '@' || c == '#' || c == '$' || c == '%' || 
                  c == '!' || c == '&' || c == '*') {
            hasSpecial = true;
        }
    }
    if(hasUpper && hasLower && hasDigit && hasSpecial) {
        cout << "Valid: The password meets all security conditions.\n";
    } else {
        cout << "Invalid: The password does not meet the policy conditions.\n";
    }

//Q-26
    float reportCard[5];
    float total = 0.0, percentage;
    for (int i = 0; i < 5; i++) {
        cout << "Enter marks for subject " << (i + 1) << ": ";
        cin >> reportCard[i];
        total += reportCard[i];
    }
    percentage = (total / 500) * 100;
    cout << "Total Marks: " << total << "/500" << endl;
    cout << "Percentage: " << percentage << "%" << endl;

//Q-27
    double prices[10];
    cout << "Enter the prices of 10 items:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Price of item " << (i + 1) << ": ";
        cin >> prices[i];
    }
    double maxPrice = prices[0];
    for (int i = 1; i < 10; i++) {
        if (prices[i] > maxPrice) {
            maxPrice = prices[i];
        }
    }
    cout << "\n--- Result ---\n";
    cout << "The maximum price among the 10 items is: " << maxPrice << endl;

//Q-28
    int arr[5], evenSum = 0, oddSum = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }
    cout << "Sum of even numbers: " << evenSum << endl;
    cout << "Sum of odd numbers: " << oddSum << endl;

//Q-29
    double temperatures[30];
    cout << "Enter the recorded temperatures for 30 days:\n";
    for (int i = 0; i < 30; i++) {
        cout << "Day " << (i + 1) << " temperature: ";
        cin >> temperatures[i];
    }
    double minTemp = temperatures[0];
    for (int i = 1; i < 30; i++) {
        if (temperatures[i] < minTemp) {
            minTemp = temperatures[i];
        }
    }
    cout << "\n--- Monthly Report ---\n";
    cout << "The minimum temperature recorded this month was: " << minTemp << " degrees.\n";

//Q-30
    double salaries[10];
    double totalSalary = 0.0;
    cout << "Enter the salaries of 10 employees:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Employee " << (i + 1) << " salary: ";
        cin >> salaries[i];
        totalSalary += salaries[i];
    }
    double averageSalary = totalSalary / 10.0;
    cout << "\n--- Payroll Summary ---\n";
    cout << "Total Salary Payout: $" << totalSalary << endl;
    cout << "Average Employee Salary: $" << averageSalary << endl;

//Q-31
    int codes[5], defectCodes = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Enter code " << (i + 1) << ": ";
        cin >> codes[i];
        if (codes[i] % 3 == 0 && codes[i] % 5 == 0) {
            defectCodes++;
        }
    }
    cout << "Number of defect codes: " << defectCodes << endl;

//Q-32
    float stockValues[5], Value1, Value2;
    for (int i = 0; i < 5; i++) {
        cout << "Enter stock value " << (i + 1) << ": ";
        cin >> stockValues[i];
    }
    Value1 = stockValues[0];
    for (int j = 0; j < 5; j++) {
        if (stockValues[j] > Value1) {
        Value1 = stockValues[j];
        }
    }
    Value2 = stockValues[0];
    for (int k = 0; k < 5; k++) {
        if (stockValues[k] > Value2 && stockValues[k] < Value1) {
            Value2 = stockValues[k];
        }
    }
    cout << "Highest value: " << Value1 << endl;
    cout << "Second highest value: " << Value2 << endl;

//Q-33
    int marks[3][5];
    cout << "Enter marks for 3 students in 5 subjects:\n";
    for(int i = 0; i < 3; i++) {
        cout << "Student " << (i + 1) << ":\n";
        for(int j = 0; j < 5; j++) {
            cout << "  Subject " << (j + 1) << ": ";
            cin >> marks[i][j];
        }
    }
    cout << "\nMarks in 2nd subject of 1st student: " << marks[0][1] << "\n";
    cout << "Marks in 5th subject of 3rd student: " << marks[2][4] << "\n";

//Q-34
    int mat1[3][3], mat2[3][3], sum[3][3];
    cout << "Enter elements of first 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> mat1[i][j];
        }
    }
    cout << "Enter elements of second 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> mat2[i][j];
        }
    }
    cout << "\nSum of the matrices is:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
            cout << sum[i][j] << " ";
        }
        cout << "\n";
    }

//Q-35
    int matrix[3][3];
    cout << "Enter elements of a 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << "\nTranspose of the matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix[j][i] << " ";
        }
        cout << "\n";
    }

//Q-36
    int m, n, p, q;
    cout << "Enter rows and columns for first matrix (m n): ";
    cin >> m >> n;
    cout << "Enter rows and columns for second matrix (p q): ";
    cin >> p >> q;
    if (n != p) {
        cout << "Matrix multiplication not possible. Columns of first must match rows of second.\n";
        return 0;
    }
    int mat1[10][10], mat2[10][10], result[10][10] = {0};
    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> mat1[i][j];
    cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < p; i++)
        for(int j = 0; j < q; j++)
            cin >> mat2[i][j];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            for(int k = 0; k < n; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    cout << "\nResultant Matrix:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }

//Q-37
    string username;
    cout << "Enter username to validate: ";
    getline(cin, username); 
    bool isValid = true;
    for(int i = 0; i < username.length(); i++) {
        char c = username[i];
        if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))) {
            isValid = false;
            break; 
        }
    }
    if(isValid && username.length() > 0) {
        cout << "Username is valid.\n";
    } else {
        cout << "Username is invalid (contains spaces or special characters).\n";
    }

//Q-39
    int rows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            cout << "  ";
        }

        int val = 1; 
        for (int j = 1; j <= i; j++) {
            cout << val << "   ";
            val = val * (i - j) / j; 
        }
        cout << "\n";
    }

//Q-40
    string input, normalized = "";
    cout << "Enter a text string: ";
    getline(cin, input);

    bool lastWasSpace = true; 
    for (int i = 0; i < input.length(); i++) {
        if (input[i] != ' ') {
            normalized += input[i];
            lastWasSpace = false;
        } else if (!lastWasSpace) {
            normalized += ' ';
            lastWasSpace = true;
        }
    }
    if (normalized.length() > 0 && normalized[normalized.length() - 1] == ' ') {
        normalized = normalized.substr(0, normalized.length() - 1);
    }

    int wordCount = 0, digitCount = 0, specialCount = 0;
    bool isValid = true;

    if (normalized.length() > 0) {
        wordCount = 1; 
        
        if (normalized[0] >= 'a' && normalized[0] <= 'z') {
            normalized[0] = normalized[0] - 32; 
        }

        for (int i = 1; i < normalized.length(); i++) {
            if (normalized[i] >= 'A' && normalized[i] <= 'Z') {
                normalized[i] = normalized[i] + 32; 
            }
        }

        for (int i = 0; i < normalized.length(); i++) {
            char c = normalized[i];
            if (c == ' ') {
                wordCount++;
            } else if (c >= '0' && c <= '9') {
                digitCount++;
            } else if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))) {
                specialCount++;
                isValid = false; 
            }
        }
    }

    cout << "\nNormalized String: " << normalized << "\n";
    cout << "Total Words: " << wordCount << "\n";
    cout << "Total Digits: " << digitCount << "\n";
    cout << "Total Special Characters: " << specialCount << "\n";
    
    if (isValid) cout << "Validation: SUCCESS (Only alphabets, digits, and spaces).\n";
    else cout << "Validation: FAILED (Contains special characters).\n";

    
    return 0;
}

