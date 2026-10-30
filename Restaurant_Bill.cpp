#include <iostream>
using namespace std;

int main() {
    float totalBill, friends, eachPayment;

    cout << "Enter total restaurant bill: ";
    cin >> totalBill;

    cout << "Enter number of friends: ";
    cin >> friends;

    eachPayment = totalBill / friends;

    cout << "Each Friend Must Pay = Rs. " << eachPayment;

    return 0;
}
