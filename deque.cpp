#include <iostream>
#include <deque>
using namespace std;
int main(){
    //deque<type> deque_name;
    //initiaized same as a vector
    //sort, reverse, lower_bound, upper_bound is the same as a vector
    deque<int> v;
    //[]
    v.push_back(2);
    //[2]
    v.push_front(3);
    //[3,2]
    v.push_front(4);
    //[4,3,2]
    v.pop_back();
    //[4,3]
    v.pop_front();
    //[3]
    return 0;
}
