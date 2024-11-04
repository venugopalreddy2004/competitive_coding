#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define tr(it,container) for(auto it = container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	map<string,int> m;
	int n;cin>>n;
	while(n--){
		string s;cin>>s;
		m[s]++;
	}
	int max=0;string t;
	tr(it,m)
	{
		cout<<it->first<<" "<<it->second<<endl;
		//if(it->second>max) max=it->second,t=it->first;
	}
	cout<<t<<endl;
}

int main(){
	solve();
}

