//an electricity board wants to design a billing system that calculates electricity charges for different types of consumers. the billling rules are:
//if only units consumend are provided- calculate bill at rs 5 per unit
//if units + rate per unit are provided - > calculate accordingly
//if units + rate + fixed charge are provided - add fixed charge to total bill

//requirements :
//1. create a class electricity bill
//2. implement function overloading for a function named calculateBill();
//~calculateBill(int units)
//~calculateBill(int units, float rate)
//~calculateBill(int units, float rate, float fixedCharge)
//3. display the calculated bill in each case
//4. in main(): call all three overloaded functions using different arguments

#include <iostream>
using namespace std;

class ElectricityBill {
public:

    
    void calculateBill(int units) {
        float bill = units * 5;
        cout << "Bill (Default rate Rs 5/unit): Rs " << bill << endl;
    }

    
    void calculateBill(int units, float rate) {
        float bill = units * rate;
        cout << "Bill (Custom rate): Rs " << bill << endl;
    }

    
    void calculateBill(int units, float rate, float fixedCharge) {
        float bill = (units * rate) + fixedCharge;
        cout << "Bill (Rate + Fixed Charge): Rs " << bill << endl;
    }
};

int main() {
    ElectricityBill obj;

    obj.calculateBill(100);                
    obj.calculateBill(100, 6.5);          
    obj.calculateBill(100, 6.5, 50);       

    return 0;
}