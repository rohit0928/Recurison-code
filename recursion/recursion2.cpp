#include<iostream>
using namespace std;
int sum(int);
 int sum(int n1){
     int res;
     if(n1==1){
         return 1;
     }
     else{
         res=n1+ sum(n1-1);
     }
     return res;
     }
int main(){
    int n1,k;
    cout<<"Enter the number from 1 which is to be printed";
    cin>>n1;
    k=sum(n1);
    cout<<k;
    return 0;
}