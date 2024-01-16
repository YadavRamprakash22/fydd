#include<iostream>
using namespace std;
int power(int n,int p){
    int temp=1;
    for(int i=1;i<=p;i++){
        temp*=n;  //temp=temp*n
    }
    return temp;
}
int main(){
    // float rate,pow,p;
    // cout<<"Enter the principle";
    // cin>>p;
    // cout<<"Enter the number";
    // cin>>rate;
    // cout<<"Enter the power";
    // cin>>pow;
    // float b=(rate+100)/100;
    // cout<<b<<endl;
    // float d=power(b,pow);
    // cout<<d<<endl;
    // float m=p*d;
    // cout<<m;
    return 0;
}   