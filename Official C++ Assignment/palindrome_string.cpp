# include<iostream>
using namespace std;
int  main(){
    string s="aba";
    int length=s.length();
    for (int i=0;i<s.length()/2;i++){
    if(s[i]!=s[length-i-1]){
        cout<<"Non-PalindromeWord";
        return 0;
    }
}
cout<<"Palindrome Word, Congratulation";
    return 0;
}