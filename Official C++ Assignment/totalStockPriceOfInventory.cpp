# include<iostream>
using namespace std;
class Inventory{
int a[50];
public:
    Inventory(int arr[], int size){
        for (int i=0;i<size;i++){
            a[i]=arr[i];
        }
        for (int i=size;i<50;i++){
            a[i]=0;
        }
    }
    void totalStockValue(){
        int sum=0;
        for(int i=0;i<50;i++){
            sum+=a[i];
        }
        cout<<"Total Stock Value: "<<sum<<endl;
    }
};
int main(){
    int a[]={2,3,6,7,8};
    int size=sizeof(a)/sizeof(a[0]);
    Inventory i(a,size);
    i.totalStockValue();
    return 0;
}