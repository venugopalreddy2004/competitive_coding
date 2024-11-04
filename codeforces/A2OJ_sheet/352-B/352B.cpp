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
	int n;cin>>n;
	vi vec;set<int> s;
	while(n--){int ai;cin>>ai;vec.push_back(ai);s.insert(ai);}
	int ct=0;
	vector<pi> pos_x;
	tr(it,s)
	{
		auto a0 = find(vec.begin(),vec.end(),*it);
		auto a1 = find(a0+1,vec.end(),*it);
		int diff = a1-a0,flag=0;
		if(a1==vec.end()){
			pos_x.push_back({*it,0});
			ct++;flag++;
		}
		while(a1<=vec.end()){
			if(a1-a0!=diff){flag++;break;}
			a0=a1;
			a1+=diff;
		}
		if(!flag){
			pos_x.push_back({*it,diff});
			ct++;
		}
	}
	cout<<ct<<endl;
	tr(it1,pos_x)
	{
		cout<<it1->first<<" "<<it1->second<<endl;
	}
}

int main(){
	solve();
}

