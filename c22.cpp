#include<iostream>
using namespace std;

int main(void)
{
	int n,x=0;
	char c1,c2,c3;
	
	cin >> n;
	
	for(int i=0;i<n;i++)
	{
		cin >> c1 >> c2 >> c3;
		
		if(c1=='X'&& c2=='+'&& c3=='+')x++;
		else if(c1=='X'&& c2=='-'&& c3=='-')x--;
		else if(c1=='+'&& c2=='+'&& c3=='X')++x;
		else if(c1=='-'&& c2=='-'&& c3=='X')--x;
	}
	
	cout << x << endl;
	
	return 0;
}
