#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int> 
using namespace std;

void solve()
{
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		vector<char> vec;
		for(int i=0;i<n;i++){
			string row;cin>>row;
			if(i%k==0){
				for(int j=0;j<n;j=j+k){
					vec.push_back(row[j]);
				}
			}
		}
		int l=n/k;
		for(int i=0;i<vec.size();i++){
			cout<<vec[i];
			if(i%l==l-1){cout<<endl;}
		}
	}
}

int main(){
	solve();
}
