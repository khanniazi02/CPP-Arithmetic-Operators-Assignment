#include <iostream>
using namespace std;

int main() {
    float purchasePrice, sellingPrice;
    float quantity, totalPurchaseCost;
    float totalSalesRevenue, profitLoss;

    cout << "Enter purchase price: ";
    cin >> purchasePrice;

    cout << "Enter selling price: ";
    cin >> sellingPrice;

    cout << "Enter quantity sold: ";
    cin >> quantity;

    totalPurchaseCost = purchasePrice * quantity;

    totalSalesRevenue = sellingPrice * quantity;

    profitLoss = totalSalesRevenue - totalPurchaseCost;

    cout << "Total Purchase Cost = Rs. "
         << totalPurchaseCost << endl;

    cout << "Total Sales Revenue = Rs. "
         << totalSalesRevenue << endl;

    cout << "Profit / Loss Amount = Rs. "
         << profitLoss;

    return 0;
}
