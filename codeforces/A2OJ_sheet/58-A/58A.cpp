#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define tr(it,container) for(auto it = container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	string s,key="hello";cin>>s;
	int i=0,j=0,ct=0;
	while(j<s.size())
	{
		if(s[j]==key[i]){ct++;i++;}
		j++;
	}
	(ct==5)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}

int main(){
	solve();
}

