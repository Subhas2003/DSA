#include <iostream>
using namespace std;

int main()
{
     int size=5;
    // int marks[6] = {45, 76, 93, 20, 68, 75};
    int marks[size];
    // double price[] = {99.8, 89.54, 75.80, 45.09}; // 3
    // int size = sizeof(marks) / sizeof(int);
   

for(int i=0;i<size;i++){
    cin>>marks[i];
}

    //input in array

    // Loop
    for (int i = 0; i < size; i++)
    {
        cout << marks[i] << endl;
    }
    return 0;
}