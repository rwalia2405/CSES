# include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	ll idx=n/2;
	ll ans=0;
	for(ll i=0;i<n;i++) ans+=abs(a[i]-a[idx]);
	cout<<ans<<"\n";
	return 0;
}
