#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    //vector<type> vector_name(number_of_items, the_assigned_value_of_each_element);
    //vector<int> A(4,5);
    //[ 5,5,5,5 ]
    //vector<type> vector_name;
    vector<int> v;
    //[]
    v.push_back(2);
    //[2]
    v.push_back(4);
    //[2,4]
    v.push_back(3);
    //[2,4,3]
    sort(v.begin(),v.end());
    //[2,3,4]
    sort(v.begin(),v.end(),greater<int>());
    //[4,3,2]
    reverse(v.begin(),v.end());
    //[2,3,4]
    int item=3;
    if(find(v.begin(),v.end(),item)!=v.end())cout<<"found item"<<endl;

    vector<int>::iterator lower = lower_bound(v.begin(), v.end(), item);
    if(lower!=v.end())cout<<lower-v.begin()<<endl;

    vector<int>::iterator upper = upper_bound(v.begin(), v.end(), item);
    if(upper!=v.end())cout<<upper-v.begin()<<endl;

    v.pop_back();
    // [2,3]
    v.pop_back();
    // [2]
    return 0;
}
