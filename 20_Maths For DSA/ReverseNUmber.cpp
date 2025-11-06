#include<iostream>
#include <climits>
using namespace std;

int reverseNumber(int n){
    int reN=0;
    while(n!=0){
        int digit=n%10;
        if(reN>INT_MAX/10 || reN<INT_MIN/10){
            return 0;
        }
        reN=(reN*10)+digit;
        n=n/10;
    }
    return reN;
}

int main(){
    int n=4537;
    cout<<reverseNumber(n);
    return 0;
}