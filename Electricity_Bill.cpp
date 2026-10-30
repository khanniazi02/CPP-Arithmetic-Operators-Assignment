#include <iostream>
using namespace std;

int main() {
    float units, pricePerUnit, totalBill;

    cout << "Enter electricity units: ";
    cin >> units;

    cout << "Enter price per unit: ";
    cin >> pricePerUnit;

    totalBill = units * pricePerUnit;

    cout << "Total Electricity Bill = Rs. " << totalBill;

    return 0;
}
