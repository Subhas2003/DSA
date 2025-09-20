#include <iostream>
#include <climits>
using namespace std;
#include <vector>

int main()
{
    int num[] = {43, 65, 87, -10, 87};
    int size = 5;
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        // if(num[i]<smallest){
        //     smallest=num[i];
        // }

        smallest = min(num[i], smallest); // this is the shortcut form
        largest = max(num[i], largest);
    }
    cout << "Smallest number is: " << smallest << endl;
    cout << "Largest number is: " << largest << endl;
    return 0;
}