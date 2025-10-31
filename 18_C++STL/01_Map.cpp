#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    map<string, int> m;
    m["TV"] = 50;
    m["Laptop"] = 150;
    m["Mobile"] = 250;
    m.emplace("SmartWatch", 320);
    m.erase("TV");
    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << "count " << m.count("Laptop")<<endl;
    if (m.find("Camera") != m.end())
    {
        cout << "Found\n";
    }
    else
    {
        cout << "Not Found";
    }
    return 0;
}