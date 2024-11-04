#include <algorithm>
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define tr(it,container) for(auto it = container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	int g[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			int n;cin>>n;
			g[i][j]=n;
		}
	}
	int line[] = {0,1,2,3,4};
	int gmax=0;
	do{
		int sum = (g[line[0]][line[1]] + g[line[1]][line[0]] + g[line[2]][line[3]] + g[line[3]][line[2]])+(g[line[1]][line[2]]+g[line[2]][line[1]]+g[line[3]][line[4]]+g[line[4]][line[3]])+(g[line[2]][line[3]]+g[line[3]][line[2]])+(g[line[3]][line[4]]+g[line[4]][line[3]]);
		gmax=max(gmax,sum);
	}while(next_permutation(line,line+5));
	cout<<gmax<<endl;
}

int main(){
	solve();
}

