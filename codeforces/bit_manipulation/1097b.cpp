#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define tr(it,container) for(auto it=container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	int n;cin>>n;
	vi vec;
	while(n--){
		int num;cin>>num;
		vec.push_back(num);
	}
	for(int mask=0;mask<(1<<(vec.size()));mask++){
		int total=0;
		for(int i=0;i<vec.size();i++){
			if(mask&(1<<i)){
				total+=vec[i];
			}else{
				total-=vec[i];
			}
		}
		if(total%360==0){
			cout<<"YES"<<endl;return;
		}
	}
	cout<<"NO"<<endl;
}

int main(){
	solve();
}

