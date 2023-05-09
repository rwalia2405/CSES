# include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int ans=1;
	for(long long int i=2;i<=n;i++) ans=ans^i;
	for(long long int i=0;i<n-1;i++)
	{
		long long int j;
		cin>>j;
		ans=ans^j;
	}
	cout<<ans<<"\n";
	return 0;
}
