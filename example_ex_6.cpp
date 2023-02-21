//https://atcoder.jp/contests/abc217/tasks/abc217_e
#include <iostream>
#include <numeric>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <queue> 
using namespace std;

int main() {
    priority_queue<int,vector<int>,greater<int> > sorted_queue;
    queue<int> q;
    int q_num;
    cin>>q_num;
    while(q_num--){
      int num;
      cin>>num;

      if(num==1){
        int val;
        cin>>val;
        q.push(val);
      } else if(num==2){
        if(sorted_queue.empty()){
          sorted_queue.push(q.front());
          q.pop();
        }
        cout<<sorted_queue.top()<<endl;
        sorted_queue.pop();
      } else {
        while (!q.empty()){
          sorted_queue.push(q.front());
          q.pop();
        }
      }
    }
    return 0;
}
