#include <iostream>
#include <map>
#include <list>
#include <queue>
using namespace std;

template <typename T>
class Graph {
    map <T , list<T>> adjList;
    public :
        Graph() {}
		void addEdge(T u, T v, bool bidir = true);
        void printAdjList();

        void bfs(T src) {
            queue<T> q;
            map<T , bool> visited;

            q.push(src);
            visited[src] = true;

            while(!q.empty()) {
				T node = q.front();
                cout << node << ' '; q.pop();

                //push the neighbours

                for(auto neighbours : adjList[node]) {
					//cout << "neighbours: " << neighbours << ' ';
                    if(!visited[neighbours]) {
                        q.push(neighbours);
                        visited[neighbours] = true;
                    }
                }
            }
        }
} ;

template <typename T>
void Graph<T>::addEdge(T u, T v, bool bidir)
{
	adjList[u].push_back(v);
	if(bidir)
		adjList[v].push_back(u);
}

template <typename T>
void Graph<T>::printAdjList()
{
	for(auto key : adjList) {
		cout << key.first << " -> ";
		for(auto neighbours : key.second) {
			cout << neighbours << " , ";
		}
		cout << endl;
	}
}


int main() {
    Graph<int> g ;

 //adding the edges in the Graph
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(0,4);
    g.addEdge(2,4);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.addEdge(3,4);

    cout << "The Graph is " << endl;
    g.printAdjList();
    cout << endl;

    cout << "The Breadth First Search from Node 0" << endl;

    g.bfs(0);

	cout << endl;
	return 0;
}
