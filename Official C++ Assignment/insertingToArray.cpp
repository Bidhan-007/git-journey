# include<iostream>
using namespace std;

class Student{
public:
    int id;
    string name;

void student(int val,string n){
    id=val;
    name=n;
}
void display(){
    cout<<"ID: "<<id<<" "<<"Name: "<<name<<endl;
}
};
int main(){
Student s[10];
s[0].student(1,"Bid");
s[1].student(2,"Amity");
int n=2;//Current NoOf Elements
int pos=0;// The PositionWHere To Insert(index)
for (int i=n;i>pos;i--){
    s[i]=s[i-1];
}
s[pos].student(3,"Aandrea");//New Obj 
n++;
for(int i=0;i<n;i++){
    s[i].display();
}
return 0;
}
