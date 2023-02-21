#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    //map<key, value> name_of_map;
    map<char,int> m;
    m['a']=1;
    //a -> 1
    cout<<m['a']<<endl;
    m['a']+=1;
    //a -> 2
    cout<<m['a']<<endl;
    // for mapping to numbers => default values is 0;
    cout<<m['b']<<endl;

    //more extreme example
    map<string, vector<int> > m_2;
    for(int i=0; i<3; i++)m_2["bering"].push_back(i);
    for(int i=0; i<3; i++)cout<<m_2["bering"][i]<<" ";
    cout<<endl;
    return 0;
}
