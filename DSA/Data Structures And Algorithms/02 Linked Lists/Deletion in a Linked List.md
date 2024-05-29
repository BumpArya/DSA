
**Deletion Cases:**
    First node: Update head pointer and free the node.
	    
	    ![[First Node.png]]
    Node at an index: Traverse to node before deletion point, adjust pointers, and free the node.
		
		![[Node at an index.png]]
    last node: Traverse to second last node, adjust pointer to NULL, and free the last node.
	    
	    ![[Last Node.png]]
    Node with a given value(First occurrence): Find the first occurrence, adjust pointers, and free the node.
	    
	    ![[Node with a given value.png]]

**Syntax for Freeing a Node:**
    `free(ptr)` to remove a node from heap memory.

**Time Complexity:**
    Deleting the first node: O(1).
    Deleting at any index, end, or based on value: O(n) due to traversal.
