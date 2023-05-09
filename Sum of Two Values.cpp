# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
struct mes
{
	ll a;
	ll b;
	mes(ll i,ll j)
	{
		a=i;
		b=j;
	}
};
bool comp(mes i, mes j)
{
	return i.a<j.a;
}
int main()
{
	ll n;
	cin>>n;
	ll x;
	cin>>x;
	vector<mes> p;
	for(ll i=0;i<n;i++) 
	{
		ll t;
		cin>>t;
		p.push_back(mes(t,i));
	}
	sort(p.begin(),p.end(),comp);
	ll i=0;
	ll j=n-1;
	bool f=true;
	while(i<j)
	{
		if(p[i].a+p[j].a==x)
		{
			cout<<p[i].b+1<<" "<<p[j].b+1<<"\n";
			f=false;
			break;
		}
		else if(p[i].a+p[j].a<x) i++;
		else j--;
	}
	if(f) cout<<"IMPOSSIBLE\n";
	return 0;
}
