#include<iostream>
#include<vector>
using namespace std;

int main(){
int arr[]={1,2,3,5,4,0};  //Array is a constant pointer not changeble
cout<<arr<<endl;  //output=> address
cout<<*arr<<endl; //output=> '0' index value
cout<<*(arr+1)<<endl;
return 0; 
}