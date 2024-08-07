#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        int n,flag=0;cin>>n;
        vector<int> vec;
        while(n--){
            int ele;cin>>ele;
            vec.push_back(ele);
        }
        int target = *max_element(vec.begin(),vec.end());
        //cout<<target<<endl;
        for(int i=0;i<vec.size();i++){
            if(vec[i]<target){
                auto it = find(vec.begin(),vec.end(),(target-vec[i]));
                if(it!=vec.end() && (it-vec.begin())!=i){
                    vec[i]=target;
                }else{
                    cout<<"NO"<<endl;
                    flag++;break;
                }
            }
        }
        if(!flag){cout<<"YES"<<endl;}
    }
}
