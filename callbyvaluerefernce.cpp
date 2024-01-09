#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int num1=5,num2=8;
    cout<<"Before swapping:"<<num1<<" "<<num2<<endl;
    swap(&num1,&num2);
    cout<<"After swappig  :"<<num1<<" "<<num2;
    return 0;
}