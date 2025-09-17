#include<iostream>
using namespace std;

int main(){

    //operators
    // +,-,*,/,%
    int a=10;
    int b=20;

    cout<<"a+b="<<a+b<<endl;
    cout<<"a-b="<<a-b<<endl;
    cout<<"a*b="<<a*b<<endl;
    cout<<"a/b="<<a/b<<endl;
    cout<<"a%b="<<a%b<<endl;

    //Relational Operators
    // >,<,>=,<=,==,!=

    cout<<(a>b)<<endl;  //true=1
    cout<<(a<b)<<endl;  //false=0
    cout<<(a>=b)<<endl; //false=0 

    //Logical Operators
    // &&,||,!  

    cout<<((a<b) && (a==b))<<endl; //false=0
    cout<<((a<b) || (a==b))<<endl; //true=


    //Unary Operator
    //increment and decrement
    // ++,--

    cout<<a++<<endl; //10
    cout<<a<<endl;   //11

    return 0;
}