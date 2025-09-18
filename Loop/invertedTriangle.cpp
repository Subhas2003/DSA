#include <iostream>
using namespace std;

int main()
{
    int n = 8;
    // for(int i=0;i<n;i++){
    //     //spaces
    //     for (int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     //nums
    //     for(int j=0;j<n-i;j++){
    //         cout<<(i+1);
    //     }
    //     cout<<endl;
    // }

    // Pyramid Pattern

    // for (int i = 0; i < n; i++)
    // {
    //     // spaces : n-i-1

    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     // nums1:i+1

    //     for (int j = 1; j <= i + 1; j++)
    //     {
    //         cout << j;
    //     }
    //     // num2
    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // Hollow Diamond Pattern

    // top
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != 0)
        {
            // spaces
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    // bottom
    for (int i = 0; i < n - 1; i++)
    {
        // spaces
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        cout << "*";

        if (i != n-2)
        {

            for (int j = 0; j < 2 * (n - i) - 5; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout<<endl;
    }
}