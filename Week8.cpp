#include <iostream>
#include <conio.h>
using namespace std;
#include <math.h>

int main() {

/*int a = 5;
int &ref = a; //alias of ref, not address of ref(pass by reference)
ref = 10;
cout << a; */

/* int x = 5;          // 101 in binary
int y = 3;          // 11 in binary
cout << (x & y); */   // bitwise operator

/*int a = 20;
int &r = a; //alias
cout << &r; //address of r (= address of a) */

/*int p = 0, q = 7;
cout << p || q;*/

for (int i = 1; i <= 5; i++) {
    cout << i << "\n"; //no flushing
}
for (int i = 1; i <= 5; i++) {
    cout << i << endl; //flushing
}

//Constructor Overloading in a Car Rental System
/* class computeRentalCost {
    private:
        double dailyRate;
        int days;
        double taxRate;
        double totalCost;
        double rental;
    public:
        computeRentalCost(double dailyRate) {
            dailyRate = dailyRate;
            rental = dailyRate*1;
        }
        computeRentalCost(double dailyRate, int d) {
            dailyRate = dailyRate;
            days = d;
            rental = dailyRate*d;
        }
        computeRentalCost(double dailyRate, int d, double tR) {
            dailyRate = dailyRate;
            days = d;
            taxRate = tR;
            rental = dailyRate*d*tR;
        }
        void displayRentalDetails() {
            cout << "Total Rental Amount: " << rental << endl;
        }
};

int main() {

    computeRentalCost cr1(1000);
    cr1.displayRentalDetails();

    computeRentalCost cr2(1000, 5);
    cr2.displayRentalDetails();

    computeRentalCost cr3(1000, 5, 20);
    cr3.displayRentalDetails();

    return 0;
} */

//Function overloading
/*double computeRentalCost(double dailyRate) {
    double rental = dailyRate*1;
    return rental;
}
double computeRentalCost(double dailyRate, int days) {
    double rental = dailyRate*d;
    return rental;
}
double computeRentalCost(double dailyRate, int days, double taxRate) {
    double rental = dailyRate*d*tR;
    return rental;
}

int main() {

    computeRentalCost(1000);
    computeRentalCost(1000, 5);
    computeRentalCost(1000, 5, 20);

    return 0;
} */



return 0;
}