#include <iostream>
using namespace std;
double fuel (double dis);

int main (){
    float distance;
    cout<<"enter the distance";
    cin>>distance;
    cout<<"calculate fuel"<<fuel(distance);

}
double fuel(double dis){
    double urfuel1 ;
    urfuel1 =dis*10;
    return urfuel1 ;
}
