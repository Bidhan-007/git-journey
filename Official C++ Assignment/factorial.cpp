# include<iostream>
using namespace std;
int fact(int num){
    int fact=1;
for(int i=1;i<=num;i++){
fact=fact*i;
}
return fact;
}
int main(){
int num;
cout<<"Enter the Number: ";
cin>>num;
cout<<"The Factorial Of "<<num<<" is: "<<fact(num);
    return 0;
}