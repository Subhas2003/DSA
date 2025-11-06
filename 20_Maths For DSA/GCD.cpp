#include<iostream>
using namespace std;

int gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }
    if(a==0) return b;
    return a;
}

//Using Recursion

int GcdRec(int a,int b){
    if(b==0) return a;
    return GcdRec(b,a%b);
}

int main(){

    cout<<GcdRec(20,28);

    return 0;
}