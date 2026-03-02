# include<iostream>
using namespace std;
bool checkYear(int year){
if (year%4==0 && year%100!=0 ||year%400==0){
    return true;
}
else{
    return false;
}
}
int main(){
int year;
cout<<"Enter Year : ";
cin>>year;
if(checkYear(year)){cout<<"Leap Year";}
else{cout<<"Not a leap year";}
return 0;
}