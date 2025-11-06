#include<iostream>
using namespace std;

void PrintDigits(int n){
    while(n!=0){
        int digit=n%10;
        cout<<digit<<endl;
        n=n/10;
    }
}

int main(){
    int n=3586;
    PrintDigits(n);
    return 0;
}