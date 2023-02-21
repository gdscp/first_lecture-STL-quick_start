//https://codeforces.com/problemset/problem/130/H
#include <iostream>
#include <stack>
using namespace std;

int main(){
    string brackets;
    cin>>brackets;
    stack<char>s;
    for(int i=0;i<brackets.size();i++){
        if(brackets[i]=='('){
            s.push('(');
        }else{
            if(s.empty()){
                cout<<"NO"<<endl;
                return 0;
            }
            s.pop();
        }
    }
    if(s.empty()){
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
