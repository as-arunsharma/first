#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,flag=0;
	int m;
	cin>>m;
	cin>>n;
	string s;
	getline(cin,s);
	
	for(int i=0;i<n;i++)
	{
		if(s[i]!='a'||s[i]!='e'||s[i]!='i'||s[i]!='o'||s[i]!='u')
		{
			flag=1;
			break;
		}
	}
	if(flag)
	cout<<"NO";
	else 
	cout<<"YES";
	return 0;
}
