#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
	int n,t;
	string s;
	
	cin >> n >> t;
	
	cin >> s;
	
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(s[j]<s[j+1]) 
			{
				swap(s[j],s[j+1]);
				j++;
			}
			
			//cout << j << endl;
		}
	}
	
	cout << s << endl;
	
	return 0;
}
