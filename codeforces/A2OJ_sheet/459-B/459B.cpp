#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define tr(it,container) for(auto it = container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	ll n;cin>>n;
	vector<ll> vec;
	while(n--){ll ai;cin>>ai;vec.push_back(ai);}
	sort(vec.begin(),vec.end());n=vec.size();
	ll diff = vec[n-1]-vec[0], ct_min=1,ct_max=1,i=1,j=n-2;
	while(i<n && vec[i]==vec[0]){
		ct_min++;i++;
	}
	while(j>=0 && vec[j]==vec[n-1]){
		ct_max++;j--;
	}
	cout<<diff<<" ";
	(!diff) ? cout<<(n)*(n-1)/2<<endl : cout<<ct_max*ct_min<<endl ;
}

int main(){
	solve();
}

