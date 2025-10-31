#include<iostream>
#include<map>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    // multimap<string,int> mp;
    unordered_map<string,int> mp;
mp.emplace("TV",100);
mp.emplace("Laptop",100);
mp.emplace("Car",100);
mp.emplace("Schorpio",100);
// mp.erase(mp.find("TV"));
for(auto val:mp){
    cout<<val.first<<" "<<val.second<<endl;
}
    return 0;
}