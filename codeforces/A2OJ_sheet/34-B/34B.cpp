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
	vi vec;
	while(n--){int ai;cin>>ai;vec.push_back(ai);}
	sort(vec.begin(),vec.end());
	int sum=0,i=0;
	while(m--){
		if(vec[i]<=0){sum+=vec[i];}
		i++;
	}
	cout<<-1*sum<<endl;
}

int main(){
	solve();
}

