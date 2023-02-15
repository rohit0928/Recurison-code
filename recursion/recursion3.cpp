#include<iostream>
using namespace std;
int fibo(int);
int fibo(int n){
    int result;
    if(n==1||n==2){
        return 1;
    }
    
          return (fibo(n-1)+fibo(n-2));
                                                             
}
int main(){
    int n;
    cout<<"Enter the number of terms to be printed: ";
    cin>>n;
    for(int i=1;i<=n;i++){
     cout<<fibo(i)<<" ";
    }
    return 0;      
}                                                     