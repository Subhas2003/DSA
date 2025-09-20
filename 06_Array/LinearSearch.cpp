#include <iostream>
using namespace std;

int search(int arr[], int size,int tergate)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == tergate)  //FOUND
        {
            return i;
        }
    }
    return -1;  //NOT FOUND
}

int main()
{
    int arr[] = {4, 2, 7, 9, 1, 2, 5,8};
    int size = sizeof(arr)/sizeof(int);
    int tergate=18;

    cout << search(arr, size,tergate) << endl;
}