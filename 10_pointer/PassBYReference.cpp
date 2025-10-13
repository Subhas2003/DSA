#include<iostream>
#include<vector>
using namespace std;

// void changeA(int* a){ //pass by reference
//      *a=20;
// }

//using alias
void changeB(int &b){
    b=30;
}

int main(){
    int a=10;
    // changeA(&a);
    changeB(a);
    cout<<"Inside main fnx "<<a;
    return 0;

}