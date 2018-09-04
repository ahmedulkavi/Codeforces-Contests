#include<iostream>
using namespace std;

int main(void)
{
	int n,c4=0,c3=0,c2=0,c1=0,s=0,c=0,b=0;
	
	cin >> n;
	
	int *a;
	
	a = new int[n];
	
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		
		if(a[i]==4)c4++;
		else if(a[i]==3)c3++;
		else if(a[i]==2)c2++;
		else if(a[i]==1)c1++;
	}
	
	c1-=c3;
	
    if(c1>0)s = s+c1+c2*2;
    else s = s+c2*2;
    
    if(s%4==0)s/=4;
    else s = (s/4)+1;
    
    cout << c4+c3+s << endl;
    
    return 0;
	
	
}
