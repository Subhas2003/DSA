#include<iostream>
#include<queue>
using namespace std;
int main(){
    // priority_queue<int> pq;
    priority_queue<int,vector<int>,greater<int>>pq; //To reverse the array
    pq.push(1);
    pq.push(2);
    pq.push(3);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    return 0;
}