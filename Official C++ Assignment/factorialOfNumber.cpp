// Calculating Factorial Of Number using Recursion

# include<iostream>
using namespace std;
int fact(int n){
    if(n==1||n==0){return 1;}
    return n*fact(n-1);
}
int main(){
int n;
cout<<"Enter the No To find Factorial: ";
cin>>n;
cout<<"The factorial of "<<n<<" is "<<fact(n);
return 0;
}