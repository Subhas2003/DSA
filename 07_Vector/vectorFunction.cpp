// Vector function

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // Size function
    // vector<char> val={'A','B','c'};
    // cout<<"Size of vector="<<val.size()<<endl;

    // push_back()
    vector<int> vec;

    cout << "Size of the vector= " << vec.size() << endl;
    vec.push_back(25);
    vec.push_back(55);
    vec.push_back(2);
    cout << "Size of the vector after push back= " << vec.size() << endl;

    // pop_back()
    vec.pop_back(); // last index element deleted (2)
    cout << "Size after delete= " << vec.size() << endl;

    // font()
    cout << "Font element = " << vec.front() << endl; // 25

    // Back()
    cout << "Back element = " << vec.back() << endl; // last element (55)

    // at()
    cout << "Index value= " << vec.at(2);

    // for (int val : vec)
    // {
    //     cout << val << " ";
    // }

    return 0;
}