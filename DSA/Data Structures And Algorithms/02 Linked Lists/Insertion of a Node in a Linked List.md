
**Insertion Efficiency:**
    Arrays require shifting for insertion (O(n)), while linked lists offer more efficient insertion.

**Insertion Cases:**
    Beginning: Update head pointer.
		    
	    ![[Beginning.png]]
    In between: Traverse to insertion point and adjust pointers.
	    
	    ![[In Between.png]]
    End: Traverse to last node and adjust pointers.
	    	
	    ![[End.png]]
    After a node: Insert new node after specified node, adjusting pointers.
	    
	    ![[After A Node.png]]

**Time Complexity:**
    Beginning insertion: O(1).
    In between or end: O(n) due to traversal.
    If given previous node's pointer: O(1).