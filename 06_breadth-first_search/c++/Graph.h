#pragma once
#include <map>
#include <list>
#include <queue>
#include <iostream>
using namespace std;

template <class T>
class Graph {
	public:
		map<T, list<T>> edges;

		void addEdge(T u, T v, bool connected = true) {
			edges[u].push_back(v);
			if (connected) {
				edges[v].push_back(u);
			}
		}

		void printEdge() {
			for(auto e : edges) {
				cout << e.first << " -> ";
				for(auto it = e.second.begin() ; it != e.second.end() ; ++it) {
					cout << *it << " , ";
				}
				cout << endl;
			}
		}

		void bfs(int s) {
			queue<T> q;
			map<T, bool> visited;
			q.push(s);

			while(!q.empty()) {
				T node = q.front(); q.pop();
				cout << node << ' ';
				visited[node] = true;

				for(auto neighbour : edges[node]) {
					if (!visited[neighbour]) {
						q.push(neighbour);
						visited[neighbour] = true;
					}
				}
			}
		}
};