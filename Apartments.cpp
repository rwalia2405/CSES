# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	ll a[n];
	ll b[m];
	for(ll i=0;i<n;i++) cin>>a[i];
	for(ll i=0;i<m;i++) cin>>b[i];
	ll i=0;
	ll j=0;
	ll ans=0;
	sort(a,a+n);
	sort(b,b+m);
	while(i<n&&j<m)
	{
		if(b[j]>=a[i]-k&&b[j]<=a[i]+k)
		{
			i++;
			j++;
			ans++;
		}
		else if(b[j]<a[i]-k)
		{
			j++;
		}
		else i++;
	}
	cout<<ans<<"\n";
	return 0;
}
