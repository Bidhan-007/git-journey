# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum=0;
    int m=n;
    while(m>0){
        int rem=m%10;
        sum=sum*10+rem;
        m=m/10;
    }
    if(n==sum){
        cout<<"Yes, A palindrome: "<<n;
    }else{
        cout<<"Not, A palindrome: "<<n;
    }
}