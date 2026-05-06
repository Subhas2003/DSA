#include <iostream>
using namespace std;

bool linearSearch(int mat[][3], int rows, int cols, int key)
{ // We must specify the number of columns in the parameter when we pass 2D array as a parameter to a function

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    //[row][column]
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}}; // 2D arrays
    int rows = 4;
    int cols = 3;
    cout << linearSearch(matrix, rows, cols, 28) << endl;
    return 0;
}