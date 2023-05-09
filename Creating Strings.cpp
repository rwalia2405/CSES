# include <bits/stdc++.h>
using namespace std;
void perm(vector<string> &v,int i,int j,string s)
{
	if(i==j) 
	{
		v.push_back(s);
		return;
	}
	for(int k=i;k<=j;k++)
	{
		char c=s[k];
		s[k]=s[i];
		s[i]=c;
		perm(v,i+1,j,s);
		c=s[k];
		s[k]=s[i];
		s[i]=c;
	}
}
int main()
{
	string s;
	cin>>s;
	vector<string> v;
	perm(v,0,s.length()-1,s);
	sort(v.begin(),v.end());
	//for(int i=0;i<v.size();i++) cout<<v[i]<<"\n";
	vector<string> p;
	for(int i=0;i<v.size();i++)
	{
		if(i<v.size()-1&&v[i]==v[i+1]) continue;
		p.push_back(v[i]);
	}
	cout<<p.size()<<"\n";
	for(int i=0;i<p.size();i++) cout<<p[i]<<"\n";
	return 0;
}
