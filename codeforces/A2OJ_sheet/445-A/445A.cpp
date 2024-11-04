#include <bits/stdc++.h>
#include <vector>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define tr(it,container) for(auto it = container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	int n,m;cin>>n>>m;
	vector<string> board;
	while(n--){string s;cin>>s;board.push_back(s);}
	for(int i=0;i<board.size();i++){
		if(i%2){
			for(int j=0;j<m;j++){
				if(j%2 && board[i][j]=='.') board[i][j]='B';
				else if(j%2==0 && board[i][j]=='.') board[i][j]='W';
			}
		}
		else{
			for(int j=0;j<m;j++){
				if(j%2 && board[i][j]=='.') board[i][j]='W';
				else if(j%2==0 && board[i][j]=='.') board[i][j]='B';
			}

		}
	}
	for(int i=0;i<board.size();i++){
		cout<<board[i]<<endl;
	}
}

int main(){
	solve();
}

