#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define tr(it,container) for(auto it = container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	ll n,m;cin>>n>>m;
	int ct=0;
	for(ll a=0;a<=1000;a++){
		for(ll b=0;b<=1000;b++){
			if(a*a+b==n && a+b*b==m) ct++;
		}
	}
	cout<<ct<<endl;
}

int main(){
	solve();
}

