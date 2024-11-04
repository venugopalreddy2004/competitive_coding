#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define tr(it,container) for(auto it = container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	// a b c d b e a
	// a a b b c d e
	string s;cin>>s;
	map<char,int> m;
	tr(it,s){
		m[*it]++;
	}
	int ct=0;
	tr(it,m){
		if(it->second%2)ct++;
	}
	if(ct==0){
		cout<<"First"<<endl;return;
	}
	if(s.size()%2){
		if((ct-1)%2){cout<<"Second"<<endl;}
		else{cout<<"First"<<endl;}
	}else{
		if(ct%2==0){cout<<"Second"<<endl;}
		else{cout<<"First"<<endl;}
	} 
}

int main(){
	solve();
}

