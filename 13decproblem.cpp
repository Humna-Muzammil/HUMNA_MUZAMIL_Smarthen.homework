#include <iostream>
using namespace std;

int evenSum(int number1, int number2) {
    int sum = 0;

  
    if (number1 % 2 != 0) {
        number1++;
    }

    for (int i = number1; i <= number2; i += 2) {
        sum += i;
    }

    return sum;
}

int main() {
    int start, end;

    
    cout << "Enter the start : ";
    cin >> start;

    cout << "Enter the end : ";
    cin >> end;

    
    int result = evenSum(start, end);
    cout << "The sum of all even numbers  is: " << result << endl;

    return 0;
}
