#include<iostream>
using namespace std;

int main(void)
{
    int n=17,k,b=0;


    cin >> n >> k;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]>=a[k-1]&&a[i]>0)b++;
    }

    cout << b << endl;

    return 0;
}
