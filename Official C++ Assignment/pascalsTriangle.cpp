# include<iostream>
using namespace std;
int fact(int x){
int f=1;
for(int i=1;i<=x;i++){
    f*=i;
}
return f;
}

int ncr(int n,int r){
return fact(n)/(fact(n-r)*fact(r));
}

int main(){
int n;
cout<<"Enter No Of Rows: ";
cin>>n;
for (int i=0;i<=n;i++){
    for (int i=1;i<=n-i;i++){
        cout<<" ";
    }
    for(int j=0;j<=i;j++){
        cout<<ncr(i,j)<<" ";
    }
    cout<<endl;
}
    return 0;
}