#include<iostream>
using namespace std;

string isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return "Not Prme";
        }
    }
    return "Prime";
}

int main(){
    int n=47;
   cout<< isPrime(n);
    return 0;
}