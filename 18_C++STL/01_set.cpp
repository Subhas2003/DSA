#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.emplace(1);
    s.emplace(2);
    s.emplace(3);
    s.emplace(4);
 //insert same value 
    s.emplace(1);
    s.emplace(2);
    s.emplace(3);
    s.emplace(5);
 //it's ignor same value
    for(auto se:s){
        cout<<se<<" ";
    }
    cout<<endl;
cout<<s.size();
    return 0;
}