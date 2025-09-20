#include <iostream>
using namespace std;

void changeArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}

int main()
{

    int arr[] = {1, 2, 3};

    changeArray(arr, 3);

    cout << "In main"<<endl;
    for (int i = 0; i < 3; i++)  //2,4,6
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}