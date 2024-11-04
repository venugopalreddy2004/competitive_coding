#include <algorithm>
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define tr(it,container) for(auto it = container.begin();it!=container.end();it++)
using namespace std;

class prime_stuff
{
	public:
		int n;

		prime_stuff(int num)
		{
			n=num;
		}

		vi sieve()                              // O(Nlog(logN))
		{
			vi sieve(n+1,0),list;
			for(int i=2;i<n+1;i++){
				if(sieve[i]) continue;
				for(int k=2*(i);k<=n;k+=(i)){
					sieve[k]=i;
				}
				list.push_back(i);
			}
			return list;
		}

		vector<pi> prime_fac()                  // O(root(N)/ln(root(N)))
		{
			int num=n;
			vector<pi> ppf;
			vi primes = sieve();
			for(int i:primes){
				if(i*i<=num){
					int ct=0;
					while(num%i==0){
						ct++;num/=i;
					}
					if(ct) ppf.push_back({i,ct});
				}
			}
			if(num>1) ppf.push_back({num,1});
			return ppf;
		}
		
		int numDiv()
		{
			vector<pi> pf=prime_fac();
			int res=1;
			for(auto i:pf){
				res *= i.second +1;
			}
			return res;
		}

		int sumDiv()
		{
			vector<pi> pf=prime_fac();
			ll res=1;
			for(auto i:pf){
				res *= ((ll)pow((double)i.first, i.second+1.0)-1)/(i.first-1);
			}
			return res;
		}

		int prodDiv()
		{
			return pow(n,numDiv()/2);
		}
		
		int eulerPhi()
		{
			vector<pi> ppf = prime_fac();
			ll res=n;
			for(pi p:ppf){
				res*=(p.first-1);
				res/=p.first;
			}
			return res;
		}

};

bool isPrime(int n)
{
	for(int i=2;i*i<=n;i++){
		if(n%i==0){return false;}
	}
	return true;
}


void solve()
{
	prime_stuff p(50);
	vi vec = p.sieve();
	int n,m;cin>>n>>m;
	auto it1=find(vec.begin(),vec.end(),n);
	auto it2=find(vec.begin(),vec.end(),m);
	if(it2-it1==1 && isPrime(m)){cout<<"YES"<<endl;}
	else{cout<<"NO"<<endl;}
}

int main(){
	solve();
}

