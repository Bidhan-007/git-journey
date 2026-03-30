# include<iostream>
# include<vector>
using namespace std;

void merge(vector<int>& v,int st,int end,int mid){// O(n)
vector<int>temp;
int i=st;
int j=mid+1;
while(i<=mid && j<=end){
if(v[i]<=v[j]){
    temp.push_back(v[i]);
    i++;
}else{
    temp.push_back(v[j]);
    j++;
} 
}
while(i<=mid){
    temp.push_back(v[i]);
    i++;
}
while(j<=mid){
    temp.push_back(v[j]);
    j++;
}
for (int i=0;i<temp.size();i++){// assigning value from Temp To Original Array
    v[i+st]=temp[i];
}
}

void mergeSort(vector<int>& v,int st,int end){// recursive Function
if(st<end){
int mid=st+(end-st)/2;
mergeSort(v,st,mid);
mergeSort(v,mid+1,end);
merge(v,st,end,mid);
}
}

int main(){
vector<int>v={3,6,9,5,2,4};
int st=0;
int end=v.size()-1;
mergeSort(v,st,end);

for (int val : v){
    cout<<val<<" ";
}
cout<<endl;
    return 0;
}