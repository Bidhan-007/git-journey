# include<iostream>
using namespace std;
int main(){
    int binary;
    cout<<"Enter Value Of Binary: ";
    cin>>binary;
    int decimal=0;
    int base=1;
    while(binary>0){
        int rem=binary%10;
        decimal+=rem*base;
        base=base*2;
        binary=binary/10;
    }
    cout<<"The decimal of Binary is: "<<decimal;
    return 0;
}