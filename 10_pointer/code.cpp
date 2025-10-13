#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a=10;
    int* ptr=&a;
    int** parentPointer=&ptr;  //pointer of pointer
    cout<<&a<<endl;
    cout<<*(ptr)<<endl; //10
    cout<<**parentPointer<<endl; //10
    return 0;
}