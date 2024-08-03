#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define tr(it,container) for(auto it=container.begin();it!=container.end();it++)
using namespace std;


// ITERATIVE SOLUTION
void ways(int row,int colm)
{
	vector<vi> ans(row,vi(colm,0));
	ans[0][0]=1;
	for(int i=0;i<row;i++){
		for(int j=0;j<colm;j++){
			if(i+1<row){ans[i+1][j]+=ans[i][j];}
			if(j+1<colm){ans[i][j+1]+=ans[i][j];}
		}
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<colm;j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	//cout<<ans[row-1][colm-1]<<endl;
}

// RECURSIVE SOLUTION (without memoization)
int brute(int row,int colm)
{
	if(row==1 && colm==1){return 1;}
	int ans=0;
	if(row>1){ans+=brute(row-1,colm);}
	if(colm>1){ans+=brute(row,colm-1);}

	return ans;
}

// RECURSIVE SOLUTION (with memoization)
int dp(int row,int colm)
{
	vector<vi> ans(row+1,vi(colm+1,-1));
	if(row==0&&colm==0){return 1;}
	if(ans[row][colm] != -1){return ans[row][colm];}

	int cur=0;
	if(row>0){cur+=dp(row-1,colm);}
	if(colm>0){cur+=dp(row,colm-1);}
	ans[row][colm]=cur;
	
	return cur;
}

// each cell has a cost variation. find the path with least cost
// here instead of all the path we are just using the best path
int min_cost(vector<vi> cost)
{
	int row=cost.size(),colm=(cost[0]).size();
	vector<vi> dp(row,vi(colm,0));
	dp[0][0]=cost[0][0];
	for(int j=1;j<colm;j++){
		dp[0][j]=cost[0][j]+dp[0][j-1];
	}
	for(int i=1;i<row;i++){
		dp[i][0]=cost[i][0]+dp[i-1][0];
	}
	for(int i=1;i<row;i++){
		for(int j=1;j<colm;j++){
			dp[i][j]=cost[i][j]+min(dp[i-1][j],dp[i][j-1]);
		}
	}
	return dp[row-1][colm-1];
}


int main(){
	vector<vi> cost = {{1,2,3},{4,8,2},{1,5,3}};
	cout<<min_cost(cost)<<endl;
}


/* brute(3,3); */
/* row>1{ */
/* 	ans += brute(2,3);{ans=6} */
/* 	brute(2,3); */
/* 	row>1{ */
/* 		ans+=brute(1,3); {ans=3} */
/* 		brute(1,3); */
/* 		row<1; */
/* 		colm>3{ */
/* 			ans+=brute(1,2); {ans=2} */
/* 			brute(1,2); */
/* 			colm>1{ */
/* 				ans+=brute(1,1); {ans=1} */
/* 				brute(1,1) is 1; */
/* 			} */
/* 		} */
/* 	} */
/* } */
