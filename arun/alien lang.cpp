#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string t,p;
		cin>>t;
		cin>>p;
		bool hasht[26],hashp[26],ans=false;
		memset(hasht,0,26);
		memset(hashp,0,26);
		for(int i=0;i<t.size();i++)
		{
			hasht[t[i]-'a']=1;
		}
		for(int i=0;i<p.size();i++)
		{
			hashp[p[i]-'a']=1;
		}
		for(int i=0;i<26;i++)
		{
			if(hasht[i]&&hashp[i])
			ans=true;
		}
		if(ans)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		
	}
	return 0;
	
}
