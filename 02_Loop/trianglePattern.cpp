#include<iostream>
using namespace std;

int main(){

    int n=5;
// char ch='A';
// int num=1;
    //  for(int i=0;i<=n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    //  }

    //another pattern

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<ch<<" ";           
    //     }
    //     ch++;
    //     cout<<endl;
    // }

    //another

    // for (int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }

//another
    for (int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }


}