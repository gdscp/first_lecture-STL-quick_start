//https://codeforces.com/contest/1682/problem/B
#include <bitset>
#include <iostream>
#include <vector>
#include <cmath>
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
    int n;
    cin>>n;
    vector<bitset<32> > a(n);
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        a[i]=temp;
    }
    bitset<32> ans;
    ans.set();
    for(int i=0; i<n; i++){
        if(a[i]!=i)
            ans=(ans&a[i]);
    }
    cout<<ans.to_ullong()<<endl;
}
