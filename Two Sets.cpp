# include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	vector<ll> a,b;
	ll sum;
	if(n%2==0)
	{
		sum=(n/2)*(n+1);
	}
	else sum = ((n+1)/2)*n;
	if(sum%2!=0)
	{
		cout<<"NO"<<"\n";
	}
	else
	{
		sum/=2;
		if(sum%n==0)
		{
			a.push_back(n);
			ll x=1;
			ll y=n-1;
			ll r=sum/n;
			while(r>1)
			{
				a.push_back(x);
				a.push_back(y);
				x++;
				y--;
				r--;
			}
			while(x<y)
			{
				if(x==y) b.push_back(x);
				else
				{
					b.push_back(x);
					b.push_back(y);
				}
				x++;
				y--;
			}
		}
		else
		{
			ll x=1;
			ll y=n;
			ll r=sum/(n+1);
			while(r>0)
			{
				a.push_back(x);
				a.push_back(y);
				x++;
				y--;
				r--;
			}
			while(x<y)
			{
				if(x==y) b.push_back(x);
				else
				{
					b.push_back(x);
					b.push_back(y);
				}
				x++;
				y--;
			}			
		}
		cout<<"YES\n";
		cout<<a.size()<<"\n";
		ll p=a.size();
		for(ll j=0;j<p;j++) cout<<a[j]<<" ";
		cout<<"\n";
		cout<<b.size()<<"\n";
		ll q=b.size();
		for(ll j=0;j<q;j++) cout<<b[j]<<" ";
		cout<<"\n";		
	}
	return 0;
}
