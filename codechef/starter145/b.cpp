#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        int n,d,sw=0;cin>>n>>d;
        while(n--){
            int ai;cin>>ai;
            if(sw%2){
                if(ai<=d){sw++;}
            }else{
                if(ai>d){sw++;}
            }
        }
        cout<<sw<<endl;
    }
}
