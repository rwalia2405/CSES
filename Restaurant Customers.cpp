# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	ll b[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	ll i=0;
	ll j=0;
	ll ans=0;
	ll ins=0;
	while(i<n&&j<n)
	{
		if(a[i]<b[j])
		{
			ins++;
			i++;
		}
		else if(a[i]>b[j])
		{
			ins--;
			j++;
		}
		ans=max(ans,ins);
	}
	cout<<ans<<"\n";
	return 0;
}
