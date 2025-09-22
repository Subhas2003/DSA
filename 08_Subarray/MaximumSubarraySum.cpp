#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    int maxSum = INT_MIN;
    int currSum = 0;
    for (int val : arr)
    {
        currSum += val;
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }

    cout<< "Max Subarray Sum = " << maxSum;

    return 0;
}