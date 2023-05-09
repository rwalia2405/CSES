# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	string s;
	cin>>s;
	ll l=s.length();
	ll a[26]={0};
	for(ll i=0;i<l;i++)
	{
		a[int(s[i])-65]++;
	}
	int q=0;
	for(int i=0;i<26;i++)
	{
		if(a[i]%2!=0)
		{
			q++;
		}
	}
	if(q>1) cout<<"NO SOLUTION"<<"\n";
	else
	{
		ll j=0;
		ll k=l-1;
		int w;
		for(int i=0;i<26;i++)
		{
			if(a[i]%2==0)
			{
				while(a[i])
			    {
				    s[j]=char(i+65);
				    //cout<<s[j]<<"\n";
				    s[k]=char(i+65);
				    j++;
				    k--;
				    a[i]-=2;
			    }
			}
			else
			{
				w=i;
			}
		}
		while(a[w])
		{
			if(a[w]>1)
			{
				s[j]=char(w+65);
				s[k]=char(w+65);
				j++;
				k--;
				a[w]-=2;
			}
			else
			{
				s[j]=char(w+65);
				a[w]--;
			}
		}
		cout<<s<<"\n";
	}
	return 0;
}
