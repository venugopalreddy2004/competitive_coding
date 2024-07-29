#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

void solve()
{
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		int cows = n/4;
		n = n-cows*4;
		int chk = n/2;
		cout<<cows+chk<<endl;
	}
}

int main(){
	solve();
}
