#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int g,s,b,count=0;cin>>g>>s>>b;
    if(g<5){count+=5-g;}
    if(s<5){count+=5-s;}
    if(b<5){count+=5-b;}
    cout<<count<<endl;
}
