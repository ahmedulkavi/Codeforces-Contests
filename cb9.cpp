#include<iostream>
using namespace std;

int main(void)
{
	string s;
	bool a = false;
	
	cin >> s;
	
	for(int i=0;i<(s.length()-1);i++)
	{
		if(s[i]&&s[i+1]&&s[i+2]&&s[i+3]&&s[i+4]&&s[i+5]&&s[i+6])
		{
			a = true;
		}
		
		else
		a = false;
	}
	
	if(a==true)cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}
