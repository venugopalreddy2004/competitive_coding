#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define tr(it,container) for(auto it = container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	string dir;
	int t,sx,sy,ex,ey;cin>>t>>sx>>sy>>ex>>ey>>dir;
	int time=0;
	map<char,int> m;
	if(ex-sx>0){
		m['E']=ex-sx;
	}else{
		m['W']=sx-ex;
	}

	if(ey-sy>0){
		m['N']=ey-sy;
	}else{
		m['S']=sy-ey;
	}

	for(int i=0;i<dir.size();i++){
		time++;
		if(m[dir[i]]>0){
			m[dir[i]]--;
		}

		if(m['N']==0 && m['E']==0 && m['W']==0 && m['S']==0){
			break;
		}
	}
	(m['N']==0 && m['E']==0 && m['W']==0 && m['S']==0) ? (cout<<time<<endl) : (cout<<-1<<endl);
}

int main(){
	solve();
}

