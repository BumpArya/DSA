
Graphs are non-linear data structures.
Linear data structures: arrays, linked lists, stacks.
Non-linear hierarchical data structures: Binary Search Trees (BST), AVL Trees.

**Formal Definition**
	A graph 𝐺=(𝑉,𝐸) consists of a set of vertices 𝑉 and edges 𝐸.
	A node or vertex is a fundamental unit containing data.
	Nodes are connected by edges, which are defined by their endpoints (the nodes they connect).

**Types of Edges**
	Directed Edge: An edge with a specific direction.
	Undirected Edge: An edge without a specific direction.
	![[Types of Edges.png]]

**Types of Graphs**
	Directed Graphs: Graphs where all edges have a direction.
	Undirected Graphs: Graphs where all edges are undirected.
	Mixed Graphs: Graphs with both directed and undirected edges, though rarely studied.

**Indegree and Outdegree**
    Indegree: Number of edges coming into a node.
    Outdegree: Number of edges going out of a node.

### Graph Representation Methods

**Adjacency List**
    Stores nodes along with lists of their neighbors.
    Example: Node 0 connects to nodes 1 and 2.
    Uses linked lists for efficient representation.
    ![[Adjacency List.png]]

**Adjacency Matrix**
    2D matrix where 𝐴𝑖𝑗​=1 if there's an edge between nodes i and j, otherwise 0.
    Self-loops (i=j) marked as 0.
    Easily checks for the presence of edges between nodes.
    ![[Adjacency Matrix.png]]

**Cost Adjacency Matrix**
    Used for weighted graphs.
    Matrix cells contain edge weights instead of just 0 or 1.
    If no edge, cell can be filled with 0 or -1 (if cost can be 0).
    ![[Cost Adjacency Matrix.png]]
   
**Edge Set**
    Stores pairs of connected nodes.
    Example: {(0, 1), (0, 2), (1, 2)}.

**Cost Adjacency List**
    Similar to adjacency list but includes edge costs in the list.

**Compact List Representation**
    Compresses the entire graph into a single 1D array.
