# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
struct tim
{
	ll s;
	ll f;
	tim(ll a,ll b)
	{
		s=a;
		f=b;
	}
};
bool comp(tim a,tim b)
{
	return a.f<b.f;
}
int main()
{
	ll n;
	cin>>n;
	vector<tim> t;
	for(ll i=0;i<n;i++)
	{
		ll a;
		ll b;
		cin>>a>>b;
		t.push_back(tim(a,b));
	}
	sort(t.begin(),t.end(),comp);
	ll ans=1;
	ll end=t[0].f;
	for(ll i=1;i<n;i++)
	{
		if(end<=t[i].s)
		{
			ans++;
			end=t[i].f;
		}
	}
	cout<<ans<<"\n";
	return 0;
}
