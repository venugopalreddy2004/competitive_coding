#include <bits/stdc++.h>
#include <queue>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define tr(it,container) for(auto it = container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	int n,k,steps=0;cin>>n>>k;
	vi v2;
	int eq=0,eqk=0;
	for(int i=0;i<n;i++){
		int ai;cin>>ai;
		v2.push_back(ai);
		if(i>0 && v2[i]!=v2[0]) eq++;
		if(i>=k && v2[i]!=v2[k-1]) eqk++;
	}
	if(!eq){
		cout<<0<<endl;
		return;
	}
	if(k==n && k!=1){
		cout<<n-1<<endl;
		return;
	}
	if(eqk){
		cout<<-1<<endl;
		return;
	}
	int kc=k;
	while(kc--){
		//check if cond satis
		int key=v2[0];
		int flag=0;
		for(int i:v2){
			if(i!=key){flag++;break;}
		}
		if(!flag){
			cout<<steps<<endl;
			return;
		}else if(k==1){
			cout<<-1<<endl;
			return;
		}

		//apply oper
		steps++;
		v2.push_back(v2[k-1]);
		v2.erase(v2.begin());
	}
	cout<<-1<<endl;
}

int main(){
	solve();
}

