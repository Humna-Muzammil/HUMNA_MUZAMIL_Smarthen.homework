#include <iostream>
using namespace std;

int calculateSum(int number1, int number2,int number3,int number4 ,int number5) {
    int sum = 0;
    for (int i = number1; i < number2; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    while (true) {
        int num1, num2,num3,num4,num5;
        cout << "Enter the first number (or -1 to exit): ";
        cin >> num1;
        
        if (num1 == -1) {
            cout << "thanks for exiting i want rest." << endl;
        
        }

        cout << "Enter the second number (or -1 to exit) : ";
        cin >> num2;
       cout << "Enter the third number(or -1 to exit) :";
        cin >> num3;
       cout << "Enter the fouth number (or -1 to exit): ";
        cin >> num4;
       cout << "Enter the fifth  number(or -1 to exit): ";
        cin >> num5;
         cout << "i donot want to calculate anymore: "<<endl;

        
        cout << "largest no display is"   << endl;
        break ;
    }

    return 0;
}