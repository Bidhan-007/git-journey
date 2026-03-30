# include<iostream>
# include<vector>
using namespace std;
int merge(vector<int>& v,int st,int mid,int end){
    vector<int>temp;
    int i=st;
    int j=mid+1;
    int count=0;
    while(i<=mid && j<=end){
    if(v[i]<=v[j]){
        temp.push_back(v[i]);
        i++;
    }else{
        temp.push_back(v[j]);
        j++;
        count+=(mid-i+1);
    }
    }
    while(i<=mid){
        temp.push_back(v[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(v[j]);
        j++;
    }
    for(int i=0;i<temp.size();i++){
        v[st+i]=temp[i];
    }
    return count;
}

int mergeSort(vector<int>& v,int st,int end){
if(st<end){
    int mid=st+(end-st)/2;
    int leftInversion=mergeSort(v,st,mid);
    int rightInversion=mergeSort(v,mid+1,end);
    int mainInversion=merge(v,st,mid,end);
    return leftInversion+rightInversion+mainInversion;
}
return 0;
}
int main(){
vector<int>v={2,4,1,3,5};
int st=0;
int end=v.size()-1;
int ans=mergeSort(v,st,end);
cout<<"countOfInversion: "<<ans;
    return 0;
}