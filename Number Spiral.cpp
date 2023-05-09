# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++)
	{
		ll y,x;
		cin>>y>>x;
		ll ans=0;
		ll d=max(y,x);
		ans+=((d-1)*(d-1));
		ans++;
		if(d%2==0)
		{
			if(x==d)
			{
				ans+=(y-1);
			}
			else
			{
				ans+=((y-1)+(d-x));
			}
		}
		else
		{
			if(y==d)
			{
				ans+=(x-1);
			}
			else 
			{
				ans+=((d-y)+(x-1));
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
