#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define tr(it,container) for(auto it=container.begin();it!=container.end();it++)
using namespace std;

int buttons(int n){
	if(n==1){return 1;}
	else{
		return (n-1 + buttons(n-1) + (((n-1)*(n-1) - n+3)/2));
	}
}


void solve()
{
	int n;cin>>n;
	cout<<buttons(n)<<endl;
}

int main(){
	solve();
}

