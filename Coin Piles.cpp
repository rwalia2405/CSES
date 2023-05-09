# include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++)
	{
		ll a,b;
		cin>>a>>b;
		if((a+b)%3!=0)
		{
			cout<<"NO\n";
		}
		else
		{
			ll c=min(a,b);
			ll d=max(a,b);
			if(d>(c*2)) cout<<"NO\n";
			else cout<<"YES\n";
		}
	}
	return 0;
}
