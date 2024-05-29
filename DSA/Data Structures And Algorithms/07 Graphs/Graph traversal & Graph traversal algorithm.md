
**Traversal**: Process of visiting (checking and/or updating) each vertex (node) in a graph.

**Breadth-First Search (BFS)**
	Start with a node and visit all its directly connected nodes before moving to their connected nodes.
	Uses Queue.
    **Exploring a Vertex (Node)**: Visiting all nodes connected to a specific node.
	**Uniqueness**: BFS spanning tree is not unique; different edges can be removed to form different spanning trees.

**Short Trick**
	**Visualization**: Convert the graph into a tree structure with a chosen root node.
	**Example**:
		![[short cut bfs 1.png]]
	    Start with node 0 as root.
	    ![[short cut bfs 2.png]]
	    Transform graph into a tree by removing cycles and duplicate edges.
	    ![[short cut bfs 3.png]]
	    The resulting tree gives a level order traversal representing the BFS order.
	**Resulting Order**: Level order traversal yields BFS order (e.g., 0, 3, 2, 1, 4, 5, 6).

**Algorithm**
    Input: Graph, nodes, edges, and source node s.
	1. Mark the source node s as visited and enqueue it.
	2. Use a while loop to process the queue until it is empty.
	3. Dequeue a node, visit all its unvisited connected nodes, mark them visited, and enqueue them.
	**Example**:
	![[BFS.png]]
