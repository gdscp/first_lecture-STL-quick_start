//https://codeforces.com/contest/1749/problem/B
#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
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
int comp(pair<long long,long long> x, pair<long long,long long> y){
    return x.second<y.second;
}
void solve(){
    long long n;
    cin>>n;
    vector<pair<long long, long long> > v(n);
    for(long long i=0; i<n; i++){
        long long temp;
        cin>>temp;
        v[i].first=temp;
    }
    for(long long i=0; i<n; i++){
        long long temp;
        cin>>temp;
        v[i].second=temp;
    }
    sort(v.begin(), v.end(), comp);
    long long ans=v[0].first;
    for(long long i=1; i<n; i++) ans+=v[i].first+v[i-1].second;
    cout<<ans<<endl;
}
