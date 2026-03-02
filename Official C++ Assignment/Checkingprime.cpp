# include<iostream>
using namespace std;
bool isPrime(int n){
if(n<=1){return false;}
for (int i=2;i<n;i++){
    if(n%i==0){return false;}
}
return true;
}
int main(){
int x;
cout<<"Value X: ";
cin>>x;
if(isPrime(x)){
    cout<<"Prime Number: "<<x;
}else{
    cout<<"Not A PrimeNumber ";
}
return 0;
}