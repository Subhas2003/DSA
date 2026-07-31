#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int> &arr, int st, int end, int mid)
{
    vector<int> temp;
    int i = st, j = mid + 1,invCount=0;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
            invCount+=(mid-i+1);
        }
    }

    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
     //copy all the element 
    for(int idx=0;idx<temp.size();idx++){
        arr[idx+st]=temp[idx];
    }
    return invCount;
}

int mergeSort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int mid = st + (end - st) / 2;
        // left
       int leftInvCount= mergeSort(arr, st, mid );
        // right
        int rightInvCount=mergeSort(arr, mid + 1, end);
        // merge array
       int invCount= merge(arr, st, end, mid);

       return leftInvCount+rightInvCount+invCount;
    }
    return 0;
}

int main()
{
    vector<int> arr = {6, 3, 5, 2, 7};
    int ans=mergeSort(arr,0,arr.size()-1);
    cout<<"Inversion Count: "<<ans<<endl;
    return 0;
}