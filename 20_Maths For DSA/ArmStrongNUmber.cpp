#include<iostream>
using namespace std;

bool isAmstrong(int n){
    int copyN=n;
    int sumOfCubes=0;

    while(n!=0){
        int digit=n%10;
        sumOfCubes+=(digit*digit*digit);
        n=n/10;
    }
    return sumOfCubes==copyN;

}

int main(){
    int n=371;
    if(isAmstrong(n)){
        cout<<"Is an Amstrong Number\n";
    }else{
        cout<<"Not An Amstrong Number";
    }
    return 0;
}