#include<iostream>
#include<vector>
#include<cstring> // Required for strlen
using namespace std;

int main(){

    char str[100];

    cout<<"Enter String: ";
    // cin>>str;
    cin.getline(str,100);
    for( auto ch:str){
        cout<<ch<<" ";
    }
    cout << endl;

    return 0;
}