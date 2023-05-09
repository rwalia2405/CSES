# include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++) cin>>a[i];
	ll maxi=INT_MIN;
	ll max_idx=0;
	for(ll i=0;i<n;i++)
	{
		max_idx+=a[i];
		maxi=max(maxi,max_idx);
		if(max_idx<0) max_idx=0;
	}
	cout<<maxi<<"\n";
}
