#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define tr(it,container) for(auto it = container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	int n,a,b,ct=0;cin>>n>>a>>b;
	for(int k=a;k<n;k++){
		if(n-k-1<=b){ct++;}
	}
	cout<<ct<<endl;
}

int main(){
	solve();
}

