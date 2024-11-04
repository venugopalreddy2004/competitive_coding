#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define tr(it,container) for(auto it = container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	string s1,s2;cin>>s1>>s2;
	int ct=0,i,j;
	if(s1.length()!=s2.length()){
		cout<<"NO"<<endl;return;
	}
	for(int k=0;k<s1.length();k++){
		if(ct==3){break;}
		if(s1[k]!=s2[k]){
			ct++;
			if(ct==1){i=k;}
			else if(ct==2){j=k;}
		}
	}
	if(ct==2 || ct==0){
		char temp=s2[i];
		s2[i]=s2[j];
		s2[j]=temp;
		if(s1==s2)cout<<"YES"<<endl;
		else{cout<<"NO"<<endl;}
	}else{
		cout<<"NO"<<endl;
	}
}

int main(){
	solve();
}

