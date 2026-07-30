#include <iostream>
#include <vector>
using namespace std;

int Partition(vector<int> &arr, int st, int end)
{
    int idx = st - 1, pivot = arr[end];

    for (int i = st; i < end; i++)
    {
        if (arr[i] <= pivot)
        {
            idx++;
            swap(arr[i], arr[idx]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}

void QuickSort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int pivIdx = Partition(arr, st, end);
        // left
        QuickSort(arr, st, pivIdx - 1);
        // Right
        QuickSort(arr, pivIdx + 1, end);
    }
}

int main()
{
    vector<int> arr = {12, 32, 35, 8, 32, 17};
    QuickSort(arr, 0, arr.size() - 1);
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}