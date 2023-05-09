# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll n,m;
	cin>>n>>m;
	vector<ll> b,ans;
	multiset<ll> a;
	for(ll i=0;i<n;i++)
	{
		int t;
		cin>>t;
		a.insert(t);
	}
	for(ll i=0;i<m;i++)
	{
		int t;
		cin>>t;
		b.push_back(t);
	}
	for(ll i=0;i<m;i++)
	{
		//ll lower=bs(a,0,a.size()-1,b[i]);
		//cout<<lower<<" ";
		set<ll> :: iterator itr;
		if(a.empty()) ans.push_back(-1);
		else
		{
			itr=a.lower_bound(b[i]);
		    if(itr==a.begin()&&*itr>b[i]) ans.push_back(-1);
		    else if(itr==a.begin()&&*itr==b[i])
		    { 
			    ans.push_back(*itr);
			    a.erase(itr);
		    }
		    else
		    {
			    if(*itr==b[i])
			    {
				    ans.push_back(*itr);
			        a.erase(itr);
			    }
			    else
			    {
				    itr--;
				    ans.push_back(*itr);
			        a.erase(itr);
			    }
		    }
		}
		/*if(lower==-1) ans.push_back(-1);
		else
		{
			ans.push_back(a[lower]);
			a.erase(a.begin()+lower);
		}*/
	}
	for(int i=0;i<ans.size();i++) cout<<ans[i]<<"\n";
	return 0;
}
