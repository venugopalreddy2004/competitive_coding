#include <bits/stdc++.h>
#include <cmath>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define tr(it,container) for(auto it=container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	int t;cin>>t;
	while(t--){
		vi vec,test;int n=16;
		while(n--){
			int ai;cin>>ai;
			vec.push_back(ai);test.push_back(ai);
		}
		sort(vec.begin(),vec.end());
		for(int i:test){
			int pos = find(vec.begin(),vec.end(),i)-vec.begin(),point=0;
			while(pos){
				point++;
				pos = ceil(double(pos)/2)-1;
			}
			cout<<point<<" ";
		}
	}
}

int main(){
	solve();
}

