#include <iostream>
using namespace std;

int main() {
    int quantity;
    float price, total, discount = 0, final_amount;

    cout << "Enter number of items: ";
    cin >> quantity;

    cout << "Enter price per item: ";
    cin >> price;

    total = quantity * price;

    if (quantity > 1000) {
        discount = total * 0.10;   // 10% discount
    }

    final_amount = total - discount;

    cout << "Total amount = " << total << endl;
    cout << "Discount = " << discount << endl;
    cout << "Final amount to be paid = " << final_amount << endl;

    return 0;
}
