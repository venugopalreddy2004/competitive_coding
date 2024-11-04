#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define tr(it,container) for(auto it = container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	ll y,k,n,x1,x2,x,flag=0;cin>>y>>k>>n;
	x1=y%k;x2=k-(y%k);
	if((x1+y)%k==0 && x1!=0) x=x1;
	else x=x2;
	while(x>0 && x<=n-y)
	{
		cout<<x<<" ";
		x+=k;flag=1;
	}
	(flag)?cout<<endl:cout<<-1<<endl;
}

int main(){
	solve();
}

