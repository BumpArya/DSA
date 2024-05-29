
**DFS Concept**: Start with a node, explore its connected nodes deeply, suspending the exploration of previous vertices. Once a node is fully explored, backtrack to explore the suspended nodes.
**Comparison with BFS**:
    **BFS**: Explores all nodes connected to a node, then moves horizontally.
    **DFS**: Goes deep into the graph vertically by exploring each branch before backtracking.

**DFS Procedure**

**Data Structures**:
	**Stack**: Holds nodes that are suspended and will be explored later.
    **Visited Array**: Tracks whether a node has been visited.
	1. Choose a source node and push it onto the stack.
    2. Mark the source node as visited.
    3. Pop the top node from the stack and mark it visited.
    4. Push all unvisited directly connected nodes onto the stack.
    5. Repeat until the stack is empty.
    **Example**:
    ![[DFS.png]]