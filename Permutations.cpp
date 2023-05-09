# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll n;
	cin>>n;
	if(n==1) cout<<"1\n";
	if(n<4) cout<<"NO SOLUTION"<<"\n";
	else
	{
		for(ll i=2;i<=n;i+=2) cout<<i<<" ";
		for(ll i=1;i<=n;i+=2) cout<<i<<" ";
		cout<<"\n";
	}
	return 0;
}
