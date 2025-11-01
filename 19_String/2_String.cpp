#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter a String Value: ";
    getline(cin,str);
    cout<<"You have entered this String: "<<str<<endl;
    for(auto st:str){
        cout<<st<<" ";
    }
    cout<<endl;
 
    return 0;
}