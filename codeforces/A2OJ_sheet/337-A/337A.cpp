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
	int n,m;cin>>n>>m;
	vi vec;
	while(m--){int fi;cin>>fi;vec.push_back(fi);}
	sort(vec.begin(),vec.end());
	int min=INT_MAX;
	for(int i=0;i<=vec.size()-n;i++){if(vec[i+n-1]-vec[i]<min)min=vec[i+n-1]-vec[i];}
	cout<<min<<endl;
}

int main(){
	solve();
}

