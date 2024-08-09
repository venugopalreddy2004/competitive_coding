#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        int n,count=0;cin>>n;
        vector<int> vec;
        while(n--){
            int ai;cin>>ai;
            vec.push_back(ai);
        }
        n=vec.size();
        int l=0,r=accumulate(vec.begin(),vec.end(),0);
        for(int i=0;i<n;i++){
            l+=vec[i];r-=vec[i];
            if(!vec[i]){
                //int l = accumulate(vec.begin(),vec.begin()+i,0);
                //int r = accumulate(vec.begin()+i,vec.end(),0);
                if(l==r){count+=2;}
                else if(abs(l-r)==1){count++;}
            }
        }
        cout<<count<<endl;
    }
}
