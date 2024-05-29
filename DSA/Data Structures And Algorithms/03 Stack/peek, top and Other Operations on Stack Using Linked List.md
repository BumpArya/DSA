
**peek:**
    Create a new node pointer ptr and set it to top.
	Traverse the stack until the desired position is reached, return the data at that position 
	Return -1 if position is invalid.
    Time complexity: O(n) due to traversal.
    
    ![[peek (linked list).png]]

**top:**
    Return the topmost value in the stack.
    Return the data member of the top pointer.

**bottom:**
    Create a new node pointer ptr and set it to top. 
    Traverse stack until (ptr->next == NULL).
