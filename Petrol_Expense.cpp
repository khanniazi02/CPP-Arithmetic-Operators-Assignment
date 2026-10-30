#include <iostream>
using namespace std;

int main() {
    float distance, average, petrolPrice;
    float petrolConsumed, totalCost;

    cout << "Enter distance travelled (km): ";
    cin >> distance;

    cout << "Enter average (km per litre): ";
    cin >> average;

    cout << "Enter petrol price per litre: ";
    cin >> petrolPrice;

    petrolConsumed = distance / average;

    totalCost = petrolConsumed * petrolPrice;

    cout << "Petrol Consumed = " << petrolConsumed << " Litres" << endl;
    cout << "Total Petrol Cost = Rs. " << totalCost;

    return 0;
}
