#include <iostream>
using namespace std;
{
 float add(float no1, float no2) {
    return (no1 + no2);
}

 float sub(float no1, float no2) {
    return (no1 - no2);
}
 float multiply (float no1,float no2){
    return (no1 * no2);
}
float div (float no1,float no2){
    return ( no1 / no2);
}
}
 int main() {
    float no1, no2, result;
    char optr;

    cout << "Enter no 1: ";
    cin >> no1;
    cout << "Enter no 2: ";
    cin >> no2;
    cout << "Enter the operator ('+', '-', '*', '/'): ";
    cin >> optr;

    if (optr == '+') {
        result = add(no1, no2);
        cout << "Result: " << result << endl;
    }  else if  (optr == '-') {
        result = sub(no1, no2);
        cout << "Result: " <<result<< endl;
    } else if (optr =='*'){
        result =multiply(no1, no2);
        cout << "result: " <<result<<endl;   
    }  else if ( optr =='/')
     result =div (no1, no2);
        cout << "result: " <<result<<endl;
      else {
        cout << "Operation not found!!!" << endl;
    }



