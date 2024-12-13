#include <iostream>
using namespace std;

 int add (int no1,int no2){
    return(no1+no2);
}
int sub (int no1,int no2){
    return(no1-no2);
}


int main()
{
    int no1,no2,result;
    char optr;
    cout<<"Enter no 1: ";
    cin>>no1;
    cout>>"Enter no 2: ";
    cin>>no2;
    cout<<"enter the operator('+','-','*','/'): ";
    cin>>optr;
    
    if (optr == '+')
    {    result = add(no1,no2);
        cout<<result<<endl;

    }
    else if (optr  == '-')
    {
        result=sub(no1,no2);  
        cout<<result<<endl;
          }
          else
          {
            cout<<"operation do not find!!!"
          }
    return 0;
}