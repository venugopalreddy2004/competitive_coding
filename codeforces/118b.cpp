#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define tr(it,container) for(auto it=container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	int n;cin>>n;
	for(int i=0;i<=n;i++){
		int ws=2*(n-i);
		while(ws--){cout<<" ";}
		for(int j=0;j<=i;j++){
			if(j!=i){cout<<j<<" ";}
			else{cout<<j;}
		}
		for(int j=i-1;j>=0;j--){
			if(j!=i){cout<<" "<<j;}
			else{cout<<j;}

		}
		cout<<endl;
	}
	for(int i=n-1;i>=0;i--){
		int ws=2*(n-i);
		while(ws--){cout<<" ";}
		for(int j=0;j<=i;j++){
			if(j!=i){cout<<j<<" ";}
			else{cout<<j;}
		}
		for(int j=i-1;j>=0;j--){
			if(j!=i){cout<<" "<<j;}
			else{cout<<j;}

		}
		cout<<endl;
	}
}

int main(){
	solve();
}

