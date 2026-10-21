#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n = 5;
	vector<pair<int,int>> a[n];
	vector<bool> visited(n, false);
	vector<int> dist(n, 1000000);
	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
	
	dist[0] = 0;
	pq.push({0, 0});
	
	
	while(!pq.empty())
	{
		int v_origin = pq.top().second;
		int w_origin = pq.top().first;
		pq.pop();
		if(visited[v_origin])
			continue;
		visited[v_origin] = true;
		
		for(auto i: a[v_origin])
		{
			int w = i.first;
			int v = i.second;
			
			if(!visited[v] && w + dist[v_origin] < dist[v])
			{
				dist[v] = w + dist[v_origin];
			
				pq.push({dist[v],v});
			}
		}
	} 
	
}