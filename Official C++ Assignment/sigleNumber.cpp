# include<iostream>
# include<vector>
using namespace std;
class Solution{
public:
    int singleNumber(vector<int>& v){
        int ans=0;
        for(int val :v){
            ans^=val;
        }
        return ans;
    }
};
int main(){
vector<int>v={1,1,2,4,2};
Solution s;
cout<<"The number with no duplicate : "<<s.singleNumber(v)<<endl;
    return 0;
}