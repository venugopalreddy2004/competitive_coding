#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define tr(it,container) for(auto it = container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	int n,ai;cin>>n;
	vector<double> a;
	while(n--){cin>>ai;a.push_back(ai);}
	int m,bi;cin>>m;
	vector<double> b;
	while(m--){cin>>bi;b.push_back(bi);}

	int max=0,count=0;
	for(int i=0;i<a.size();i++){
		for(int j=0;j<b.size();j++){
			if(b[j]/a[i]==ceil(b[j]/a[i])){
				if(b[j]/a[i]>max){
					max=b[j]/a[i];count=1;
				}else if(b[j]/a[i]==max) count++;
			}
		}
	}
	cout<<count<<endl;

}

int main(){
	solve();
}

