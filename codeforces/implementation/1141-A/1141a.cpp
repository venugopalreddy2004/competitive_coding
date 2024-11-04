#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define tr(it,container) for(auto it=container.begin();it!=container.end();it++)
using namespace std;
 
void solve()
{
	int n,m,k=0;cin>>n>>m;
	int res=m/n;
	if(m%n){
		cout<<-1<<endl;return;
	}
	while(res>=(1<<k)){
		if((res&((1<<k)-1))==0){k++;}
		else{break;}
	}
	k--;
	res /= (1<<k);
	int k3=0;
	while(res>=pow(3,k3)){
		if(res%int(pow(3,k3))==0){k3++;}
		else{break;}
	}
	k3--;
	res/=pow(3,k3);
	if(res==1){cout<<k+k3<<endl;}
	else{cout<<-1<<endl;}
	/* cout<<2<<" "<<k<<" "<<3<<" "<<k3<<endl; */
}
 
int main(){
	solve();
}
 
