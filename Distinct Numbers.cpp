# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	ll c=1;
	for(ll i=1;i<n;i++)
	{
		if(a[i]!=a[i-1]) c++;
	}
	cout<<c<<"\n";
	return 0;
}
