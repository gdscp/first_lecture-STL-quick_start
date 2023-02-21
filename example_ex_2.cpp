//https://codeforces.com/problemset/problem/1520/D
#include <iostream>
#include <map>
using namespace std;
void solve();
int main()
{
    int t=1, i=1;
    cin>>t;
    while(t--)
        solve(), i++;
    return 0;
}
void solve(){
    long long n;
    cin>>n;
    long long array[n];
    map<long long,long long> m;
    map<long long,long long>::iterator it;
    long long ans=0;
    for (long long i = 0; i < n; ++i){
        cin>>array[i];
        array[i]-=i;
    }
    for (long long i = 0; i < n; ++i)
        m[array[i]]++;
    for(it=m.begin(); it!=m.end(); it++)
        ans+=((it->second-1)*(it->second))/2;
    cout<<ans<<endl ;
}
