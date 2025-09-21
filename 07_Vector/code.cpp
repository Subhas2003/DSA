#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int>vec; //0 (1st approch)
    // vector<int>vec={1,2,3}; //1  (2nd approch)

    // vector<int> vec(5, 0); //3rd approch

    // cout<<vec[0]<<endl;
    // cout<<vec[1]<<endl;
    // cout<<vec[2]<<endl;
    // cout<<vec[3]<<endl;
    // cout<<vec[4]<<endl;

    vector<char> vec = {'a', 'B', 'c'};

    for (char val : vec)   //for each loop
    {
        cout << val << endl;
    }

    return 0;
}