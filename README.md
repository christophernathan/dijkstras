# dijkstras

A simple implementation of dijkstra's algorithm for shortest path in a weighted, directed graph. Uses a priority queue to rank and process adjacent nodes by shortest distance. Global constants define the number of nodes per graph, maximum number of edges from each node, and maximum edge weight. Nodes will not have loops and will only have a maximum of 1 edge to any given node. Compile using `g++ -o dijkstras dijkstras.cpp`. Then, run with `./dijkstras`.
