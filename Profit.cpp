#include <iostream>

using namespace std;

int main()
{
    int buyingPrice, sellingPrice, profit;
    cout << "Enter the selling price \n";
    cin >> sellingPrice;
    cout << "Enter the buying price \n";
    cin >> buyingPrice;
    profit = sellingPrice - buyingPrice;
    cout << "Your profit is " << profit;
}
