#include <iostream>
using namespace std;

//decimal to  binary convert

// int decToBinary(int decNum)
// {
//     int ans = 0;
//     int power = 1;
//     while (decNum > 0)
//     {
//         int remainder = decNum % 2;
//         decNum = decNum / 2;
//         ans += (remainder * power);
//         power = power * 10;
//     }
//     return ans; // binary form
// }

//biinary to decimal convert

int binaryToDec(int binary){
    int ans=0;int power=1;

    while(binary>0){
        int remainder=binary%10;
        ans=ans+(remainder*power);

        binary/=10;
        power*=2;
    }
    return ans;
}


int main()
{

    // int decNum = 50;
    // cout << "Decimal number to binary number : " << decToBinary(decNum) << endl;
    
    int binary=101010;

    cout<<"Binary to Decimal number is: "<<binaryToDec(binary);

    return 0;
}