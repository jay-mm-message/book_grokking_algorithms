clear

if [ -e a.out ]; then
	rm a.out
fi
g++ j_graph_bfs.cpp
./a.out
