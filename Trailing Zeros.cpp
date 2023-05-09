# include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int five=0;
	long long int two=0;
	long long int t=n;
	long long int p=5;
	while(t/p)
	{
		five+=(t/p);
		p=p*5;
	}
	p=2;
	while(t/p)
	{
		two+=(t/p);
		p=p*2;
	}
	long long int ans=min(five,two);
	cout<<ans<<"\n";
	return 0;
}
