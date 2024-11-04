#include <algorithm>
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define tr(it,container) for(auto it=container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		vi vec;
		while(n--){
			int ai;cin>>ai;
			vec.push_back(ai);
		}
		int res=vec[0];
		for(int i=0;i<vec.size();i=i+2){
			if(vec[i]>res && (vec.size()-i)%2==1){
				res=vec[i];
			}
		}
		cout<<res<<endl;
	}
}

int main(){
	solve();
}

