# include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	for(ll i=1;i<=n;i++)
	{
		ll t=i*i;
		ll q=(t*(t-1))/2;
		if(i>2)
		{
			ll x=4*(i-1)*(i-2);
			q=q-x;
		}
		cout<<q<<"\n";
	}
	return 0;
}
