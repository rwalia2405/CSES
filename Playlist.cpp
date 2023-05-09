# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++) cin>>a[i];
	map<ll,ll> m;
	ll ans=INT_MIN;
	ll c=0;
	ll j=0;
	ll s=0;
	while(j<n)
	{
		while(j<n&&m[a[j]]==0)
		{
			m[a[j]]++;
			c++;
			ans=max(ans,c);
			j++;
		}
		while(m[a[j]]>0)
		{
			m[a[s]]--;
			s++;
			c--;
		}
	}
	cout<<ans<<"\n";
	return 0;
}
