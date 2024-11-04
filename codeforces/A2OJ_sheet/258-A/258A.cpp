#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define tr(it,container) for(auto it = container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	string str,res="";cin>>str;
	int set=0,d,n=0;
	for(int i=0;i<str.size();i++){
		if(str[i]=='1' && set==0) set=1;
		if(set){
			if(set==1 && str[i]=='0'){
				set++;
			}else{
				res+=str[i];
			}
		}
		if(str[i]=='1') n++;
	}
	if(n==str.size()) cout<<res.substr(0,res.size()-1)<<endl;
	else cout<<res<<endl;
}

int main(){
	solve();
}

