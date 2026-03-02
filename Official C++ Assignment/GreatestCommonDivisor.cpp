# include<iostream>
using namespace std;
int gcd(int a,int b){
    int result=min(a,b);
    while(result>0){
        if(a%result==0&&b%result==0){
            break;
        }
        result--;
    }
    return result;
}
int main(){
    int a=12;
    int b=18;
    cout<<"GCD [H.C.F]:"<<gcd(a,b);
    return 0;
}