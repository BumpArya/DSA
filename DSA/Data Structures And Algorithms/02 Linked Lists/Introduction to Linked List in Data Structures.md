
**Linked Lists Overview:**
	 Fundamental difference from arrays: stored in non-contiguous memory.
	 Arrays require contiguous memory, while linked lists allow dynamic length.

**Structure of a Linked List:**

	![[Structure of a linked list.png]]

**Advantages of Linked Lists:**
    Dynamic length: adding/removing elements without capacity constraint.
    Enabling efficient insertion and deletion.(No shifting elements)

**Drawbacks:**
    Extra memory for pointers.
	No random access due to non-contiguous memory.

**Implementations:**
	
	struct Node
	{
	    int data;
	    struct Node * next;  // Self referencing structure
	};

**Creation and Traversal:**
	Memory allocation for nodes is done using malloc(), linking nodes via pointer assignments.
	A traversal function iterates through the list, printing data until it reaches the end (NULL pointer).
