#include <bits/stdc++.h>
#include <climits>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define tr(it,container) for(auto it = container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	int n,k;cin>>n>>k;
	vi vec;
	while(n--){
		int ai;cin>>ai;
		vec.push_back(ai);
	}
	int kmin=0,k2=k,i=0;
	while(k2--){
		kmin+=vec[i];
		i++;
	}
	int sum=kmin,pos=1;
	for(i=1;i<=vec.size()-k;i++){
		sum=sum-vec[i-1]+vec[i+k-1];
		if(sum<kmin){
			kmin=sum;
			pos=i+1;
		}
	}
	cout<<pos<<endl;
}

int main(){
	solve();
}

