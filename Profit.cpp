// This program computes the profit made from selling a motor vehicle
#include <iostream>
using namespace std;

int main () 
{
    double buyingPrice, sellingPrice, profit;

    // Ask user for buying and selling prices
    cout << "Enter the buying price of the vehicle: ";
    cin >> buyingPrice;

    cout << "Enter the selling price of the vehicle: ";
    cin >> sellingPrice;

    // Compute the profit
    profit = sellingPrice - buyingPrice;

    // Display the profit
    cout << "The profit made from the vehicle sale is: " << profit << "\n";

    return 0;
}