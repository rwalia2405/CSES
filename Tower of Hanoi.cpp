# include <bits/stdc++.h>
using namespace std;
void toh(int n, char a, char b,char c)
{
	if(n==1)
	{
		cout<<a<<" "<<c<<"\n";
		return;
	}
	toh(n-1,a,c,b);
	cout<<a<<" "<<c<<"\n";
	toh(n-1,b,a,c);
}
int main()
{
	int n;
	cin>>n;
	cout<<pow(2,n)-1<<"\n";
	toh(n,'1','2','3');
	return 0;
}
