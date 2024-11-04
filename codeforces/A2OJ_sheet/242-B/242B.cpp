#include <algorithm>
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
	int n;cin>>n;
	vector<pair<ll,ll>> vec;
	ll lmin=INT_MAX,rmax=INT_MIN;
	while(n--){
		ll li,ri;cin>>li>>ri;
		lmin=min(lmin,li);
		rmax=max(rmax,ri);
		vec.push_back({li,ri});
	}
	auto it=vec.begin();
	while(it!=vec.end()){
		if(it->first==lmin && it->second==rmax){
			cout<<it-vec.begin()+1<<endl;
			return;
		}
		it++;
	}
	cout<<-1<<endl;
}

int main(){
	solve();
}

