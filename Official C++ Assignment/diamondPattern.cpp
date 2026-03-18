# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter No of Rows: ";
    cin>>n;
    int nsp=n-1;
    int ns=1;
    int ml=5;
    for (int i=1;i<=2*n-1;i++){
        for (int j=1;j<=nsp;j++){
            cout<<" ";
        }
        for (int k=1;k<=ns;k++){
            cout<<"*";
        }
        cout<<endl;
        if(ml<=i){
            nsp++;
            ns-=2;
        }else{
            nsp--;
            ns+=2;
        }
    }
    return 0;
}