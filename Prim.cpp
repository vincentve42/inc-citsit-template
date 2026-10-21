#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> a[n];
	vector<bool> visited(n, false);
	vector<int> dist(n, 1000000);
	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
	
	pq.push({0,0});
	dist[0] = 0;
	while(!pq.empty())
	{
		int v = pq.top().second;
		int w = pq.top().first;
		pq.pop();
		if(visited[v] == true)
			continue;
		visited[v] = true;
		for(auto i: a[v])
		{
			int w = i.first;
			int v = i.second;
			
			if(visited[v] == false && w < dist[v])
			{
				pq.push({w,v});
				dist[v] = w;
				
			}
		}
	}
	
}