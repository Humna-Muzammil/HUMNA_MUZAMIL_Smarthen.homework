#include <iostream>
using namespace std;

float taxCalculator(char type, float price) {
    float taxRate = 0.;

   switch (type) {
        case 'M':
            taxRate = 0.06;
            break;
        case 'E':
            taxRate = 0.08;
            break;
        case 'S':
            taxRate = 0.10;
            break;
        case 'V':
            taxRate = 0.12;
            break;
        case 'T':
            taxRate = 0.15;
            break;
        
            cout << "Never type again  ur desired vehicle do not found" << endl;
            return 0.0;
    }


    float taxAmount = price * taxRate;


    float finalPrice = price + taxAmount;

    return finalPrice;
}

int main() {
    char vehicleType;
    float vehiclePrice;

    cout << "Enter the type (M, E, S, V, T): ";
    cin >> vehicleType;

    cout << "Enter the  price: $";
    cin >> vehiclePrice;


    float finalPrice = taxCalculator(vehicleType, vehiclePrice);


    if (finalPrice > 0) {
        cout << "The final price on a vehicle  " << vehicleType <<endl;
        cout << " after adding the tax is $" << finalPrice << "." << endl;
    }

    return 0;
}