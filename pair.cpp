#include <iostream>
#include <utility>
using namespace std;
int main(){
    /*
     a nice replacement to :
     struct pair{
       type_1 var_1;
       type_2 var_2;
     };
    */
    pair<int, char> p(3,'a');
    // p = [3  -  a]
    cout<<p.first<<" "<<p.second<<endl;
    p.first=4;
    p.second='b';
    // p = [4  -  b]
    cout<<p.first<<" "<<p.second<<endl;
    p=make_pair(5,'c');
    // p = [5  -  c]
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}
