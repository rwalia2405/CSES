# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll n,x;
	cin>>n>>x;
	ll a[n];
	for(int j=0;j<n;j++) cin>>a[j];
	sort(a,a+n);
	ll ans=0;
	int i=0;
	int j=n-1;
	while(i<=j)
	{
		if(a[i]+a[j]<=x)
		{
			ans++;
			i++;
			j--;
		}
		else
		{
			ans++;
			j--;
		}
	}
	cout<<ans<<"\n";
	return 0;
}
