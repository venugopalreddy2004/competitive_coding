#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define tr(it,container) for(auto it=container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	int t;cin>>t;
	while(t--){
		int n,k=0;cin>>n;
		while(n>=(1<<k)){
			k++;
		}
		cout<<(1<<(k-1))-1<<endl;
	}
}

int main(){
	solve();
}

