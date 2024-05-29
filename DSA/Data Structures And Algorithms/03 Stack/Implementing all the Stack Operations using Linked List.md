
**Algorithm for Stack Operations:**

**isEmpty:**
	Check if the top element is NULL.

**isFull:**
	Create a new node using malloc.
    If malloc returns NULL, stack is full.

**Push:**
	Create a new node with the given data.
    If stack is not full, set new node's next pointer to current top.
    Update top to point to the new node.
    
    ![[push (linked list).png]]

**Pop:**
	If stack is not empty, store top node's data.
    Update top to point to the next node.
    Free the memory of the removed node and return its data.
    
	![[pop (linked list).png]]

**Traversal:**
    Traverses the linked list and prints each element until NULL.
