# include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll x,n;
	cin>>x>>n;
	// set<ll> s;
	// s.insert(0);
	// s.insert(x);
	// ll a[n];
	// for(ll i=0;i<n;i++) cin>>a[i];
	// ll ans=INT_MIN;
	// for(ll i=0;i<n;i++)
	// {
	// 	set<ll> :: iterator itr=lower_bound(s.begin(),s.end(),a[i]);
	// 	set<ll> :: iterator itr1=itr--;
	// 	//cout<<*itr<<" "<<*itr1<<"\n";
	// 	ans=max(abs(a[i]-*itr),max(abs(a[i]-*itr1),ans));
	// 	cout<<ans<<" ";
	// 	s.insert(a[i]);
	// }
	ll a[n];
	for(ll i=0;i<n;i++) cin>>a[i];
	ll lower = 0;
	ll upper = x;
	ll ans = x;
	for(ll i=0;i<n;i++)
	{
		if(a[i]>=lower && a[i]<=upper)
		{
			ll left = a[i]-lower;
			ll right = upper - a[i];
			if(left>right)
			{
				ans = left;
				upper = a[i];
			}
			else if(left<right){
				ans = right;
				lower = a[i];
			}
			else
			{
				if(i!=(n-1))
				{
					if(a[i+1]>a[i])
					{
						ans = left;
						upper = a[i];
					}
					else{
						ans = right;
						lower = a[i];
					}
				}
				else{
					ans = left;
					upper = a[i];
				}
			}
		}
		cout << ans << " ";
	}
	return 0;
}
