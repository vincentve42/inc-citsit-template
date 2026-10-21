#include <bits/stdc++.h>
// BFS
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	vector<int> a[n];
	
	queue<int> b;
	
	vector<bool> visited(n, false);
	
	b.push(0);
	visited[0] = true;
	while(!b.empty())
	{
		int v = b.front();
		b.pop();
		cout << v << " ";
		for(int c: a[v])
		{
			if(visited[c] == false)
			{
				b.push(c);
				visited[c] = true;
			}
		}
		
	}
}
