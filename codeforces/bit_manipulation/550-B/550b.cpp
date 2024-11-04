#include <bits/stdc++.h>
#include <climits>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define tr(it,container) for(auto it=container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	int n,l,r,x;
	cin>>n>>l>>r>>x;
	vi vec;
	while(n--){
		int rate;cin>>rate;
		vec.push_back(rate);
	}
	int count=0;
	for(int mask=3;mask<(1<<vec.size());mask++){
		if(__builtin_popcount(mask)>=2){
			int max_r=INT_MIN,min_r=INT_MAX;
			ll total=0;
			for(int i=0;i<vec.size();i++){
				if(mask&(1<<i)){
					total += vec[i];
					max_r=max(vec[i],max_r);
					min_r=min(vec[i],min_r);
				}
			}
			if((total>=l && total<=r)&&((max_r-min_r)>=x)){
				count++;
			}
		}
	}
	cout<<count<<endl;
}

int main(){
	solve();
}

