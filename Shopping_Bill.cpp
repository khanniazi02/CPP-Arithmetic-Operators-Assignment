#include <iostream>
using namespace std;

int main() {
    int notebookPrice, notebookQuantity;
    int penPrice, penQuantity;
    int totalBill;

    cout << "Enter notebook price: ";
    cin >> notebookPrice;

    cout << "Enter notebook quantity: ";
    cin >> notebookQuantity;

    cout << "Enter pen price: ";
    cin >> penPrice;

    cout << "Enter pen quantity: ";
    cin >> penQuantity;

    totalBill = (notebookPrice * notebookQuantity)
              + (penPrice * penQuantity);

    cout << "Total Shopping Bill = Rs. " << totalBill;

    return 0;
}
