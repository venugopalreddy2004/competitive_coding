#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        //int a,b,c,m;cin>>a>>b>>c>>m;
        int n=3,m;
        vector<int> vec;
        while(n--){
            int ai;cin>>ai;
            vec.push_back(ai);
        }
        cin>>m;
        sort(vec.begin(),vec.end());
        if((vec[1]-vec[0])<=m || (vec[2]-vec[1])<=m){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
}
