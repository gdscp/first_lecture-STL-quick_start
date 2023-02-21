//https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/
#include <iostream>
#include <set>
using namespace std;

int main() {
	int t=1;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		multiset<long long> bags;
		for(int i=0;i<n;i++){
			int candy;
			cin>>candy;
			bags.insert(candy);
		}
		long long total_candies=0;
		for(int i=0;i<k;i++){
			multiset<long long>::iterator last = --bags.end(); 
			int candy = *last;
			total_candies += candy;
			bags.erase(last);
			bags.insert(candy/2);
		}
		cout<<total_candies<<endl;
	}
}
