# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++) cin>>a[i];
	multiset<ll> s;
	s.insert(a[0]);
	for(ll i=1;i<n;i++)
	{
		set<ll> :: iterator itr=s.lower_bound(a[i]);
		if(itr==s.end()) s.insert(a[i]);
		else 
		{
			if(*itr!=a[i])
			{
				s.erase(itr);
				s.insert(a[i]);
			}
			else s.insert(a[i]);
		}
	}
	cout<<s.size()<<"\n";
	return 0;
}
