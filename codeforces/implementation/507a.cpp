#include <algorithm>
#include <bits/stdc++.h>
#include <bitset>
#include <iterator>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define tr(it,container) for(auto it=container.begin();it!=container.end();it++)
using namespace std;

void solve()
{
	// this would eventually fail as int has a limit to its size. Instead we can use bitset to overcome this issue.
	/* int n,k;cin>>n>>k; */
	/* vi vec; */
	/* while(n--){ */
	/* 	int ai;cin>>ai;vec.push_back(ai); */
	/* } */
	/* int best=0,count=0;vi res; */
	/* for(int mask=0;mask<(1<<vec.size());mask++){ */
	/* 	int total=0;vi temp; */
	/* 	for(int i=0;i<vec.size();i++){ */
	/* 		if(mask&(1<<i)){ */
	/* 			total+=vec[i];temp.push_back(i+1); */
	/* 		} */
	/* 	} */
	/* 	if(total>=best && total<=k && __builtin_popcount(mask) >= count){ */
	/* 		best =total; */
	/* 		count=__builtin_popcount(mask); */
	/* 		res.clear(); */
	/* 		copy(temp.begin(),temp.end(),back_inserter(res)); */
	/* 	} */
	/* } */

	/* cout<<res.size()<<endl; */
	/* for(int i:res){ */
	/* 	cout<<i<<" "; */
	/* } */
	/* cout<<endl; */

	//int n,k;cin>>n>>k;
	bitset<100> x(100);
	cout<<x.count()<<endl;

}

int main(){
	solve();
}

