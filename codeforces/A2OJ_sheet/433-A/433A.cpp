#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define tr(it,container) for(auto it = container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	int n,sum=0;cin>>n;
	map<int,int> m1;
	while(n--){int a;cin>>a;m1[a]++;sum+=a;}
	n=m1[100]+m1[200];
	if(!(sum%200)){
		sum/=2;
		int b=min(sum/200,m1[200]);
		if((sum-b*200)/100 <= m1[100]){
			cout<<"YES"<<endl;
		}else{cout<<"NO"<<endl;}
		return;
	}
	cout<<"NO"<<endl;
}

int main(){
	solve();
}

