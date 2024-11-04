#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define tr(it,container) for(auto it = container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	map<int,int> m;
	vector<pi> vec;
	ll n,flag=0;cin>>n;
	for(ll i=0;i<2*n;i++){
		int x;cin>>x;
		if(!m[x]){
			m[x]=i+1;
		}else{
			vec.push_back({i+1,m[x]});
			flag++;
		}
	}
	if(flag!=n){
		cout<<-1<<endl;
	}else{
		tr(it,vec){
			cout<<it->first<<" "<<it->second<<endl;
		}
	}

}

int main(){
	solve();
}

