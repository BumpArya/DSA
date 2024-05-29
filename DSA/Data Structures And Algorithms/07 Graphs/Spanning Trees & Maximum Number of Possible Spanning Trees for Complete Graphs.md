
**Subgraphs**: A subgraph of a graph 𝐺 is a graph whose vertices and edges are subsets of 𝐺.
**Connected Graphs**: A connected graph is one in which there is a path between every pair of vertices.
**Complete Graphs**: A complete graph is a simple undirected graph in which every pair of distinct vertices is connected by a unique edge.

**Spanning Trees**: A spanning tree of a graph 𝐺 is a connected subgraph that includes all the vertices of 𝐺 and has exactly ∣𝑉∣−1 edges, where ∣𝑉∣ is the number of vertices in 𝐺.
	**Conditions for a Spanning Tree**:
	    1. All vertices of 𝐺 are present.
	    2. The subgraph is connected.
	    3. The number of edges is ∣𝑉∣−1.

**The number of spanning trees** for a **Complete graph** with 𝑛 vertices is 𝑛^(𝑛−2).
**Cost of a Spanning Tree**: The cost of a spanning tree is the sum of the weights of its edges.


**Prim's Algorithm**:
	Prim's algorithm uses a greedy approach to find the MST. It builds the MST incrementally by starting from an arbitrary node and expanding the tree by adding the least expensive edge from the tree to a vertex not yet in the tree.

**Steps:**
1. Start with any node.
2. Grow the MST by adding the smallest edge connecting the tree to a vertex not yet in the tree.
3. Repeat until all vertices are included.
	![[Prim's MST.png]]


