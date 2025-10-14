#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int tar)
{
    int n = arr.size(), st = 0, end = n - 1;
    while (st <= end)
    {
        int mid =st+ (end-st) / 2;
        if (tar > arr[mid])
        {
            st = mid + 1; //2nd half
        }
        else if (tar < arr[mid])
        {
            end = mid - 1; //1st half 
        }
        else
        {
            return mid;
        }
        
    }
    return -1;
}

int recBinarySearch(vector<int> &arr, int tar,int st,int end)
{
    if (st <= end) 
    {
        int mid =st+ (end-st) / 2;
        if (tar > arr[mid])
        {
            return recBinarySearch(arr,tar,mid+1,end); //2nd half
        }
        else if (tar < arr[mid])
        {
            return recBinarySearch(arr,tar,st,mid-1); //1st half 
        }
        else
        {
            return mid;
        }
        
    }
    return -1;
}

int main()
{

    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; // odd
    int tar1 = 12;
    cout << binarySearch(arr1, tar1)<<endl;
    vector<int> arr2 = {-1, 0, 3, 5, 9, 12}; // even
    int tar2 = 0;
    cout<<binarySearch(arr2,tar2);

    return 0;
}