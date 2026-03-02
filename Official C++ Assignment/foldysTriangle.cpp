# include<iostream>
using namespace std;
int main(){
    int a=1;
    int n;
    cout<<"Enter NumberOf ROWS: ";
    cin>>n; 
    for (int i=1;i<=n;i++){
        for (int k=1;k<=i;k++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
    return 0;
}