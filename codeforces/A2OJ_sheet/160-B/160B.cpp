#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define tr(it,container) for(auto it = container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	int n;
	string str;cin>>n>>str;
	vi v1,v2;
	for(int i=0;i<n;i++){
		v1.push_back(str[i]-'0');
		v2.push_back(str[n+i]-'0');
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());

	int set;
	(v1[0]>v2[0])?set=1:set=0;
	if(set){
		for(int k=0;k<n;k++){
			if(v1[k]<=v2[k]){
				cout<<"NO"<<endl;
				return;
			}
		}
		cout<<"YES"<<endl;
	}else{
		for(int k=0;k<n;k++){
			if(v2[k]<=v1[k]){
				cout<<"NO"<<endl;
				return;
			}
		}
		cout<<"YES"<<endl;
	}
}

int main(){
	solve();
}

