#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {1, 2, 3, 4, 5}; // 1d array

    //[row][column]
    //int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}}; // 2D arrays
    int matrix[4][3];
    int rows = 4;
    int cols = 3;
    // taking input in 2D array
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
           cin>>matrix[i][j];
        }
        cout<<endl;
    }
   //Output 2D array
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
   
    return 0;
}