#include<iostream>
using namespace std;

int main(void)
{	
	int n=0,m;
	string s;
	cin >> s;
	
	m=s.length();
	
	for(int i=0;i<m;i++)
	{
		for(int j=i+1;j<m;j++)
		{
			if(s[i]==s[j])
			{
				s[j]='0';
			}
		}
	}
	
	for(int i=0;i<m;i++)
	{
		if(s[i]!='0')
		{
			n++;
		}
	}
	
	cout << n << endl;
	cout << s << endl;
	return 0;
}
