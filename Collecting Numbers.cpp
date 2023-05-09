# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++) cin>>a[i];
	set<ll> s;
	s.insert(a[0]);
	ll ans=1;
	for(ll i=1;i<n;i++)
	{
		if(s.find(a[i]-1)==s.end()) ans++;
		s.insert(a[i]);
	}
	cout<<ans<<"\n";
	return 0;
}
