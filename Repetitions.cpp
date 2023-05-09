# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	string s;
	cin>>s;
	ll ans = 1;
	ll cnt = 1;
	for(ll i=0;i<s.length();i++)
	{
		if(s[i]==s[i-1])
		{
			cnt++;
			ans=max(ans,cnt);
		}
		else cnt=1;
	}
	cout<<ans<<"\n";
	return 0;
}
