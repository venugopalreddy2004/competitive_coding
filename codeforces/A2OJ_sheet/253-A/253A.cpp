#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define tr(it,container) for(auto it = container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	int n,m;cin>>n>>m;
	if(n>m){
		int k=n-m;
		while(m--){
			cout<<"BG";
		}
		cout<<string(k,'B')<<endl;
	}else{
		int k=m-n;
		while(n--){
			cout<<"GB";
		}
		cout<<string(k,'G')<<endl;
	}
}

int main(){
	solve();
}

