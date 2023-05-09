# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
vector<ll> sum2(vector<ll> a,ll i,ll j,ll s)
{
	map<ll,ll> m;
	vector<ll> ans;
	m[a[i]]=i;
	for(ll k=i+1;k<=j;k++)
	{
		if(m.find(s-a[k])!=m.end())
		{
			ans.push_back(k);
			ans.push_back(m[s-a[k]]);
			return ans;
		}
		m[a[k]]=k;
	}
	return ans;
}
int main()
{
	ll n,x;
	cin>>n>>x;
	vector<ll> a(n);
	for(ll i=0;i<n;i++) cin>>a[i];
	bool b=true;
	for(ll i=0;i<n-2;i++)
	{
		vector<ll> p=sum2(a,i+1,n-1,x-a[i]);
		if(p.size()>0)
		{
			b=false;
			cout<<i+1<<" "<<p[1]+1<<" "<<p[0]+1<<"\n";
			break;
		}
	}
	if(b) cout<<"IMPOSSIBLE\n";
	return 0;
}
