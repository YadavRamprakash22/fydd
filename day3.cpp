// loop:- when some condition are print until it's false then use loop.
// types of loop:1. while loop:1.it's entry control loop
                            // 2.when we know the condition then use while loop
//               2. do-while loop:- 1.it's exit control loop
                                  //2.it's run atleast one time when condition false
//               3.for loop:-1.when we know the number of iteratrion then use for loop.
                         //  2.and it's entry control loop


// Syantax:- while loop

// while(condition){
//     statement;
//     increment/decrement operator;
// }

#include<iostream>
using namespace std;
// int main(){
//     int num=1,table;
//     cout<<"Enter the number";
//     cin>>table;
//     while (num<1)
//     {
//         cout<<table<<"*"<<num<<"="<<(table*num)<<endl;
//         num++;
//     } 
//     return 0;
// }
// Syantax:-do while loop
// do{
//     statement;
//     increament/decrement;
// }while(condition);

// int main(){
    
//     int table,num=1;
//     cout<<"Enter the number";
//     cin>>table;
//     do
//     {
//         cout<<table<<"*"<<num<<"="<<(table*num)<<endl;
//         num++;
//     } while (num<1);
    
//     return 0;
// }
// syntax:-for loop
// for(intialize;condition;incre/decre){
//     statement;
// }
// int main(){
//     int table,num;
//     cout<<"Enter the number";
//     cin>>table;
//     for(num=1;num<=10;num++)
//     {
//         cout<<table<<"*"<<num<<"="<<(table*num)<<endl;
//     }
// }




//funtion:-
int add(int num);
int main(){
    int num1;
    cout<<"Enter the number";
    cin>>num1;
    add(num1);
    return 0;
}
int add(int num=23){
    int check=1;
    for(int i=2;i<num;i++){
        if(num%i==0){
            check=0; 
        }
    }
    if(check==1){
        cout<<"it is prime number";
        }
        else{
            cout<<"it is not prime number";
        }
}