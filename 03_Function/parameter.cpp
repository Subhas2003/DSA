#include <iostream>
using namespace std;

double sum(double a, double b)
{
    double s = a + b;
    return s;
}

// min of two number

int minoftwo(int a, int b)  //parameters
{
    if (a < b)
    {
        cout << "a is minimum" << endl;
        return a;
    }
    else
        cout << "b is minimum" << endl;
    return b;
}

int main()
{

    cout << minoftwo(7, 5); //argument

    return 0;
}