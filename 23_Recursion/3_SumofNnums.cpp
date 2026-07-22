#include<iostream>
using namespace std;

int SumofNnums(int n){
    if(n==0){
        return 0;
    }
    return n+SumofNnums(n-1);
}

int main(){
    cout<<SumofNnums(4);
    return 0;
}