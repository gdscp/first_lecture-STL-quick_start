#include <iostream>
#include <set>
using namespace std;
typedef set<int> set_inc;
typedef set<int, greater<int> > set_dec;
int main(){
    //set
    set_inc s_1;
    set_dec s_2;
    s_1.insert(4);
    s_1.insert(2);
    s_1.insert(6);
    s_2.insert(5);
    s_2.insert(1);
    s_2.insert(5);
    // s1 = {2,4,6} , s_2 = {5,1}
    s_2.erase(5);
    // S 2 = {1}
    set_inc::iterator a=s_1.begin();
    set_inc::iterator b=s_1.end();
//     2 4 6
//     |   |
//     a   b
    b--;
//     2 4 6
//     | |
//     a b
    s_1.erase(a,b);
    // s 1 ={6}

    cout<<"s_1: "<<endl;
    a=s_1.begin();
    while (a!=s_1.end()) {
        cout<<*a<<" ";
        a++;
    }
    cout<<"\ns_2: "<<endl;
    a=s_2.begin();
    while (a!=s_2.end()) {
        cout<<*a<<" ";
        a++;
    }
    return 0;
}
