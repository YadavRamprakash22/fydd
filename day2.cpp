//https://www.geeksforgeeks.org/cpp-programming-examples/

#include <iostream>
using namespace std;
int main(){
    //Condition:- if anyone check condition with certain statement then use conditional statement
    // there is 6 types of conditional statement
    // 1. if block 
    int num1,num2,num3;
    cout<<"Enter the Number:";
    cin>>num1;
    // if(num>0){
    //     cout<<"Number is positive:"<<num;
    // }


    // 2. if else block
    // if(num>0){
    //     cout<<"Number is positive:"<<num;
    // }else{
    //     cout<<"Number is negative:"<<num;
    // }


    // 3. nested if else block
    // if(num1>num2){
    //     if(num1>num3){
    //         cout<<num1;
    //     }else{
    //         cout<<num3;
    //     }
    // }
    // else{
    //     if(num2>num3){
    //         cout<<num2;
    //     }else{
    //         cout<<num3;
    //     }
    // }


    // 4. else if block
    // if(num>0){
    //     cout<<"Number is positive:"<<num;
    // }else if(num==0){
    //     cout<<"Number is nautral:"<<num;
    // }
    // else{
    //     cout<<"Number is negative:"<<num;
    // }

    // 5. ladder block
    // if(condition){
        
    // }
    // else if(condition){

    // }
    // else if(condition){
        
    // }
    // else if(condition){
        
    // }else{

    // }


    // 6. switch block
    switch (num1)
    {
    case 1:
    cout<<"Monday";
        break;
    case 2:
    cout<<"Tuesday";
        break;
    case 3:
    cout<<"Wedensday";
        break;
    case 4:
    cout<<"Thursday";
        break;
    case 5:
    cout<<"Friday";
        break;
    case 6:
    cout<<"Saturday";
        break;
    case 7:
    cout<<"sunday";
        break;
    
    
    default:
    cout<<"Invalid input";
        break;
    }


    return 0;
}

