#include <iostream>
using namespace std;

int main() {
    float basicSalary, houseRent, medicalAllowance;
    float grossSalary;

    cout << "Enter basic monthly salary: ";
    cin >> basicSalary;

    cout << "Enter house rent allowance: ";
    cin >> houseRent;

    cout << "Enter medical allowance: ";
    cin >> medicalAllowance;

    grossSalary = basicSalary + houseRent + medicalAllowance;

    cout << "Gross Salary = Rs. " << grossSalary;

    return 0;
}
