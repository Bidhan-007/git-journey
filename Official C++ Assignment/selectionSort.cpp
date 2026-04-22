# include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
for(int i=0;i<n;i++){
    int min_idx=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[min_idx]){
            min_idx=j;
        }
    }
    if(min_idx!=i){
        int temp=arr[min_idx];
        arr[min_idx]=arr[i];
        arr[i]=temp;
    }
}
return;
}
int main(){
    int arr[]={1,2,43,55,32};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    cout<<"Selection Sorted Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}