#include <bits/stdc++.h>
#include <cmath>
#define endl '\n'
#define ll long long
#define tr(it,container) for(auto it=container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	int t;cin>>t;
	while(t--)
	{
		int n,q;cin>>n>>q;
		string a,b;cin>>a>>b;
		while(q--)
		{
			int l,r;cin>>l>>r;
			map<char,int> m1,m2;set<char> s;
			for(int i=l-1;i<r && i<n;i++){
				s.insert(a[i]);
				m1[a[i]]++;m2[b[i]]++;
			}
			int count=0;
			tr(it,s)
			{
				char ch = *it;
				int diff = m1[ch]-m2[ch];
				if(diff>0){count+=diff;}
			}
			cout<<count<<endl;
		}
	}
}

int main(){
	solve();
}
