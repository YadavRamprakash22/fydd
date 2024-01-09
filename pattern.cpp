#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the Number";
    cin>>row; 
    // for(int i=0;i<=row;i++){
    //     for(int j=row;j>=i;j--){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<"\n";
    // } 

    //  for(int i=0;i<=row;i++){
    //     for(int j=row;j>=i;j--){
    //         cout<<"";
    //     }
    //     for(int j=0;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<"\n";
    // } 

    //  for(int i=0;i<=row;i++){
    //     for(int j=row;j>=i;j--){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<"\n";
    // } 


    //  for(int i=row;i>=0;i--){
    //     for(int j=row;j>=i;j--){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<"\n";
    // } 
    // for(int i=row;i>=0;i--){
    //     for(int j=row;j>=i;j--){
    //         cout<<"";
    //     }
    //     for(int j=0;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<"\n";
    // } 



    // for(int i=row;i>=0;i--){
    //     for(int j=row;j>=i;j--){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<"\n";
    // } 



    // for(int i=row;i>=0;i--){
    //     for(int j=row;j>=i;j--){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<"\n";
    // } 
    // for(int i=0;i<=row;i++){
    //     for(int j=row;j>=i;j--){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<"\n";
    // }

    // for(int i=0;i<=row;i++){
    //     for(int j=row;j>=i;j--){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<"\n";
    // }
    // for(int i=row;i>=0;i--){
    //     for(int j=row;j>=i;j--){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<"\n";
    // } 

    int temp=0;
    for(int i=0;i<=row;i++){
        for(int j=row;j>=i;j--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<temp<<" ";
            temp++;
        }
        cout<<"\n";
    }
     
    return 0;
}