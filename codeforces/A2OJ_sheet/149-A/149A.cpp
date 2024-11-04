#include <bits/stdc++.h>
#include <climits>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define tr(it,container) for(auto it = container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	int k,n=12;cin>>k;
	vi vec;
	while(n--){int mi;cin>>mi;vec.push_back(mi);}
	if(!k){cout<<0<<endl;return;}
	int min=INT_MAX;
	for(int mask=0;mask<(1<<13);mask++){
		int sum=0,set=0;
		for(int i=0;i<12;i++){
			if(mask&(1<<i)){sum+=vec[i];set++;}
		}
		if(sum>=k && set<min){
			min=set;
		}
	}
	if(min==INT_MAX){min=-1;}
	cout<<min<<endl;
}

int main(){
	solve();
}

