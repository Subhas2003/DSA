#include <iostream>
using namespace std;

// sum of n number
//  int sumofNnumber(int a)
//  {
//      int n = 0;
//      for (int i = 0; i <= a; i++)
//      {
//          n += i;
//      }
//      return n;
//  }

// n factorial
//  int factorial(int n){
//      int a=1;
//      for (int i=1;i<=n;i++){
//          a*=i;
//      }
//      return a;
//  }

// Calculate sum of digits of a number
// ex:145=>1+4+5=10
// int sumofdigits(int num)
// {
//     int digits = 0;
//     while (num > 0)
//     {
//         int lastdigit = num % 10;
//         num = num / 10;
//         digits += lastdigit;
//     }
//     return digits;
// }

//Calculate nCr binomial coefficient for n & r
 int factorial(int n){
     int a=1;
     for (int i=1;i<=n;i++){
         a*=i;
     }
     return a;
 }
int ncr(int n,int r){
int factof_n=factorial(n);
int factof_r=factorial(r);
int factof_nr=factorial(n-r);

return (factof_n/(factof_r*factof_nr));
}

int main()
{

    // cout<<sumofNnumber(5);

    // cout<<factorial(5);
    // cout << sumofdigits(145);

    int n=8;int r=2;

    cout<<ncr(n,r);


    return 0;
}