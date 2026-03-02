
// Day Of Week -- By Using Zellers-Congruence Series 


# include<iostream>
using namespace std;
int main(){
    
    int q;
    int m;
    int yr;
    cout<<"Enter The Year: ";
    cin>>yr;
    cout<<"Enter The Month: ";
    cin>>m;
    cout<<"Enter The Day: ";
    cin>>q;
    if(m==1||m==2){
        m+=12;
        yr--;
    }
    int k=yr%100;
    int j=yr/100;

    int h=(q+(13*(m+1)/5)+k+(k/4)+(j/4)+5*j)%7;
    switch(h){
        case 0:cout<<"Saturday";break;
        case 1:cout<<"Sunday";break;
        case 2:cout<<"Monday";break;
        case 3:cout<<"Tuesday";break;
        case 4:cout<<"Wednesday";break;
        case 5:cout<<"Thursday";break;
        case 6:cout<<"Friday";break;

    }
    return 0;
}