#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c,d;cin>>a>>b>>c>>d;
	if(a*b*c>d*d*d){cout<<"Cuboid"<<endl;}
	else if(a*b*c==d*d*d){cout<<"Equal"<<endl;}
	else{cout<<"Cube"<<endl;}

}
