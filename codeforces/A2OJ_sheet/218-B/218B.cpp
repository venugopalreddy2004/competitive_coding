#include <algorithm>
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define tr(it,container) for(auto it = container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	int n,m;cin>>n>>m;
	vi vec1,vec2;
	while(m--){int ai;cin>>ai;vec1.push_back(ai);vec2.push_back(ai);}
	sort(vec1.begin(),vec1.end());
	sort(vec2.begin(),vec2.end());

	int min=0,n2=n;
	while(n--)
	{
		min+=vec1[0];vec1[0]--;
		if(!vec1[0]) vec1.erase(vec1.begin());
		sort(vec1.begin(),vec1.end());
	}
	int max=0;
	while(n2--)
	{
		max+=vec2[vec2.size()-1];vec2[vec2.size()-1]--;
		if(!vec2[vec2.size()-1]) vec2.erase(vec2.end()-1);
		sort(vec2.begin(),vec2.end());
	}
	cout<<max<<" "<<min<<endl;
}

int main(){
	solve();
}

