//Bering Tafa
//simple template to get you starting cp
#include <climits>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <sys/types.h>
#include <type_traits>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <unordered_map>
#include <deque>
#include <list>
#include <iterator>
#include <utility>
#include <errno.h>
#include <chrono>
using namespace std;
typedef long long int ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
typedef map<ll,ll> mi; 
typedef vi::iterator vi_it;
typedef mi::iterator mi_it;
typedef priority_queue<ll> max_heap;
typedef priority_queue<ll, vector<ll>, greater<ll> > min_heap;
const ll MOD = 1e9 + 7;
#define SWAP(x, y, T) do { T z = x; x = y; y = z; } while (0)
#define all(x) x.begin(), x.end()
#define endl '\n'
#define dbg(v) {cout<<"Line["<<__LINE__<<"] : "<<#v<<"="<<(v)<<'\n';}
#define dbg_array(x, n) {cout<<"Line["<<__LINE__<<"] : "<<#x"[ ";for(long long _=0;_<n;++_)cout<<(x)[_]<<", ";cout<<"]\n";}
template <typename T> ostream& operator<<(ostream& out, vector<T> v){
    if (v.empty()) { out << "[]"; return out; }
    out<<"[ ";
    for(ll i = 0; i < v.size() - 1; i++) out<<v[i]<<", ";
    return out<<v.back()<<" ]\n";
}
template <typename T> ostream& operator<<(ostream& out, deque<T> deq) {
    if (deq.empty()) { out<< "[]"; return out; }
    out<<'[';
    for(ll i = 0; i < deq.size() - 1; i++) out<<deq[i]<<", ";
    return out<<deq.back()<<"]\n";
}
template <typename T1, typename T2> ostream& operator<<(ostream& out, pair<T1, T2> p) {
    return out<<"[ "<<p.first<<", "<< p.second<<" ]\n";
}
template <typename T_1,typename T_2> ostream& operator<<(ostream& out, vector<pair<T_1,T_2> > v){
    if (v.empty()) { out<<"[]"; return out; }
    out<< '[';
    for (ll i = 0; i < v.size() - 1; i++) out<<v[i].first<<" -> "<<v[i].second<<'\n';
    return out<<v.back().first<<" -> "<<v.back().second<<"]\n";
}
template <typename T_1, typename T_2> ostream& operator<<(ostream& out, map<T_1,T_2> m){
    out << '{';
    for (typename::map<T_1,T_2>::iterator it = m.begin(); it != m.end(); it++) {
        out<<it->first<<" : "<<it->second;
        if (next(it) != m.end()) out << ", ";   
    }return out << "}\n";
}
void solve();
int main()
{
#ifndef ONLINE_JUDGE
    //create the files: 
    //input.txt and output.txt in the same directory
    //1. put the input in the inout in input.txt
    //2. compile and run the code using g++ -g -o code <file_name>.cpp && ./code
    //3. output wil be loaded in output.txt
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t=1, i=1;
    //delete cin>>t; if there is only one case at a time
    cin>>t;
    while(t--)solve();
    return 0;
}
void solve(){
    //=========================================================================
    //solution for one test_case
    //delete only the solve function each time you start a new exercise
    //
    //EXAMPLES ON HOW TO USE:
    ll bering=4;
    cout<<"VARIABLE:\n";
    dbg(bering);
    ll a[4];
    mi m;
    for(int i=0; i<4; i++)a[i]=i, m[a[i]]++;
    cout<<"ARRAYS:\n";
    dbg_array(a, 4);
    cout<<"MAPS:\n"<<m;
    vi v;
    for(int i=1; i<=4; i++)v.push_back(a[4-i]);
    sort(all(v));
    cout<<"VECTOR:\n"<<v;
    pi p;
    p.first=4, p.second=5;
    cout<<"PAIR:\n"<<p;
    vector<pi> v_p;
    for(int i=0; i<4; i++)v_p.push_back(make_pair(i, i+1));
    cout<<"VECTOR WITH PAIRS:\n"<<v_p;
    //=========================================================================
}
