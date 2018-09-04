#include<iostream>
#include<queue>
using namespace std;

int main(void)
{
	int n;
	string s;
	queue <string> q;
	
	q.push("Sheldon");
	q.push("Leonard");
	q.push("Penny");
	q.push("Rajesh");
	q.push("Howard");
	
	cin >> n;
	
	for(int i=1;i<n;i++)
	{
		s = q.front();
		q.pop();
		q.push(s);
		q.push(s);
	}
	
	cout << q.front() << endl;
	return 0;
}
