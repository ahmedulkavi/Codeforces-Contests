#include<iostream>
using namespace std;

int main(void)
{
	int n,s=0;
	double c=0;
	
	cin >> n;
	
	int *a = new int[n];
	
	for(int i =0;i<n;i++)
	{
		cin >> a[i];
		s+=a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		c+=a[i];
		if(c>=(s/2.0))
		{
			cout << i+1 << endl;
			delete []a;
			return 0;
		}
	}
	
}
