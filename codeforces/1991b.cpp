#include <bits/stdc++.h>
#include <numeric>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define tr(it,container) for(auto it=container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vi vec;
		while(n--){
			int ai;cin>>ai;
			vec.push_back(ai);
		}
		int flag=0,count=0;
		vi kvec;
		while(n<40)
		{
	
			if(!accumulate(vec.begin(),vec.end(),0)){
				flag++;break;
			}

			sort(vec.begin(),vec.end()); 
			int k = (vec[vec.size()-1] + vec[0])/2;
			for(int& i:vec){
				i = abs(i-k);
			}
			kvec.push_back(k);
			n++;
		}
		if(flag){
			cout<<kvec.size()<<endl;
			for(auto i:kvec){
				cout<<i<<" ";
			}
			cout<<endl;
		}else{
			cout<<-1<<endl;
		}
	}
}

int main(){
	solve();
}

