# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll missing(ll a[],ll n)
{
	if(a[0]!=1) return 1;
	ll ans=1;
	for(ll i=1;i<n;i++)
	{
		if(a[i]>ans+1) return ans+1;
		ans+=a[i];
	}
	return ans+1;
}
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	ll ans=missing(a,n);
	cout<<ans<<"\n";
	return 0;
}
