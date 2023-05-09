# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll modulo=1000000007;
	ll ans=1;
	for(ll i=0;i<n;i++)
	{
		ans=(ans*2)%modulo;
	}
	cout<<ans<<"\n";
	return 0;
}
