#include<iostream>
using namespace std;

int main(void)
{
	string s,s1,t;
	int j=0;
	
	cin >> s >> t;
	
	s1 = s;
	
	for(int i=s.length()-1;i>=0;i--)
	{
		s1[j] = s[i];
		j++;
	}
	
	if(t==s1)
	{
		cout << "YES" << endl;
	}
	
	else cout << "NO" << endl;
	
	return 0;
}
