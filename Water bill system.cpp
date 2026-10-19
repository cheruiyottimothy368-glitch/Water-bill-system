
//
Name: TIMOTHY CHERUYOT
Reg: CT101/G/26622/25







#include <iostream>
using namespace std;

string customerName;
double unitsConsumed, ratePerUnit;
double totalBill, discount, finalAmount;

void getCustomerDetails() {
    cout << "Enter customer name: ";
    cin >> customerName;

    cout << "Enter units consumed: ";
    cin >> unitsConsumed;

    cout << "Enter rate per unit: ";
    cin >> ratePerUnit;
}

void calculateBill() {
    totalBill = unitsConsumed * ratePerUnit;
}

void applyDiscount() {
    if (unitsConsumed > 100) {
        discount = totalBill * 0.10;
    } else {
        discount = 0;
    }

    finalAmount = totalBill - discount;
}

void displayBill() {
    cout << "\n===== WATER BILL =====\n";
    cout << "Customer Name: " << customerName << endl;
    cout << "Units Consumed: " << unitsConsumed << endl;
    cout << "Rate Per Unit: " << ratePerUnit << endl;
    cout << "Total Bill: " << totalBill << endl;
    cout << "Discount: " << discount << endl;
    cout << "Final Amount Payable: " << finalAmount << endl;
}

int main() {
    getCustomerDetails();
    calculateBill();
    applyDiscount();
    displayBill();

    return 0;
}