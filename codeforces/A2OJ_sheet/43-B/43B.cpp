#include <bits/stdc++.h>
#include <string>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define tr(it,container) for(auto it = container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	map<char,int> m1,m2;
	for(char i:s1){m1[i]++;}
	for(char i:s2){m2[i]++;}
	tr(it, m2)
	{
		if(it->second>m1[it->first] && it->first!=' '){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
}

int main(){
	solve();
}

