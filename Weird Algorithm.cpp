# include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	cout<<n<<" ";
	while(n>1)
	{
		if(n%2==0)
		{
			n=n/2;
			cout<<n<<" ";
		}
		else
		{
			n=n*3+1;
			cout<<n<<" ";
		}
	}
	if(n!=1&&n!=0) cout<<n<<"\n";
	return 0;
}
