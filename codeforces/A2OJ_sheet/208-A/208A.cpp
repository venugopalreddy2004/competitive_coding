#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define tr(it,container) for(auto it = container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	string str;cin>>str;
	vi vec;
	while(str.find("WUB")<=str.size()-1)
	{
		auto pos = str.find("WUB");
		vec.push_back(pos);
		str[pos]=str[pos+1]=str[pos+2]='_';
		/* cout<<str<<endl; */
	}
	vector<string> res;
	for(int i=0;i<vec.size();i++){
		res.push_back(str.substr(vec[i]+3,vec[i+1]-vec[i]-3));
	}
	for(string s:res){if(s!=" ")cout<<s<<" ";}
	cout<<endl;
}

int main(){
	solve();
}

