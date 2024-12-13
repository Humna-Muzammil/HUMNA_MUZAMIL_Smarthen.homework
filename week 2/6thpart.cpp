#include <iostream>
using namespace std;

int sum(int a,int b);

void print_greet(string name){
    cout<<"hello!  "<<name<<endl;
    }

int main(){
print_greet("haman");

    int no1,no2;
    cout<<"Enter number 1:   ";
    cin>>no1;
    cout<<"Enter number 2:   ";
    cin>>no2;


    cout<<"sum is" <<sum(no1,no2);

    return 0;
}