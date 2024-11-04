#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define tr(it,container) for(auto it = container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	int n;cin>>n;
	map<int,int> m;
	vi vec;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		m[x]++;
		vec.push_back(x);
	}
	tr(it,m){
		if(it->second>ceil(n/2.0)){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
}

int main(){
	solve();
}

