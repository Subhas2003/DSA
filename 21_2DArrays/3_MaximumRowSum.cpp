#include <iostream>
using namespace std;
#include <climits>


int getMax(int mat[][3], int rows, int cols)
{
    int maxRowSum = INT_MIN;
    for (int i = 0; i < rows; i++)// rows
    { 
        int rowsumI = 0;
        for (int j = 0; j < cols; j++)// cols
        { 
            rowsumI += mat[i][j];
        }
        maxRowSum=max(maxRowSum,rowsumI);
    }
    return maxRowSum;
}

int main()
{

    int matrix[3][3] = {{1, 2, 30}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;
    cout<<getMax(matrix,rows,cols)<<endl;

    return 0;
}