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
		double a,b,c;cin>>a>>b>>c;
		int r1,r2;
		if(floor(c/b)>=a){r2=-1;}
		else{
			r2=b;
		}
		if(c<=a){r1=-1;}
		else{r1=1;}
		cout<<r1<<" "<<r2<<endl;
	}
}

int main(){
	solve();
}

