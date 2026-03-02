# include<iostream>
using namespace std;
int main(){
    int decimal;
    cout<<"Enter Decimal Number: ";
    cin>>decimal;
    int sum=0;
    int base=1;
while(decimal>0){
    int rem=decimal%2;
    sum+=rem*base;
    base=base*10;
    decimal=decimal/2;
    }
cout<<"The Binary Is : "<<sum;
    return 0;
}