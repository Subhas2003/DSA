//Merge sort using recursion
#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr,int st,int end,int mid){
    vector<int>temp;
    //we merge two sort array
    int i=st,j=mid+1;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){         //if we change "<=" to ">=" it will store in decending order
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    //rest of the element push to temp
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }

    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx=0;idx<temp.size();idx++){
        arr[idx+st]=temp[idx];
    }

}

void mergeSort(vector<int> &arr,int st,int end){
    if(st<end){
        int mid=st+(end-st)/2;
        //left
        mergeSort(arr,st,mid);
        //right
        mergeSort(arr,mid+1,end);
        //merge the array
        merge(arr,st,end,mid);
    }
}

int main(){
    vector<int> arr={12,31,35,8,32,17,1,0};
    int n=arr.size();
    mergeSort(arr,0,n-1);
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}