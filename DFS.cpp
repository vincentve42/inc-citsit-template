// DFS


#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a[n];
	stack<int> b;
	vector<bool> vis(n, false);
	
	b.push(0);
	vis[0] = true;
	
	while(!b.empty())
	{
		int v = b.top();
		b.pop();
		
		for(int i: a[v])
		{
			if(vis[i] == false)
			{
				vis[i] = true;
				b.push(i);
			}
		}
	}
}