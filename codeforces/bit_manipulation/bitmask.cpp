#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define tr(it,container) for(auto it=container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	int target=100;
	vi vec = {2,1,4,3,5,6,1,2,8,3};
	for(int mask=0;mask<(1<<(vec.size()));mask++){
		int subset_sum=0;
		for(int i=0;i<vec.size();i++){
			if(mask&(1<<i)){
				subset_sum+=vec[i];
			}
		}
		if(subset_sum==target){
			cout<<"YES"<<endl;return;
		}
	}
	cout<<"NO"<<endl;
}

int main(){
	solve();
}

