
![[Linked list queue.png]]

Enqueue Operation:
    Similar to inserting at the end in a linked list.
    Create a new node, assign memory, fill data.
	Adjust pointers: set next of last node to new node, update rear.
    Special case: if first element, update front as well
    ![[Linked list enqueue.png]]
    ![[Dequeue linked list.png]]

Dequeue Operation:
	Similar to deleting the head node in a linked list.
    Check if queue is not empty.
    Store data of front node, update front pointer.
    Free memory of removed node, return stored data.
    ![[Linked list enqueue special case.png]]

Condition Checks:
     isEmpty: front node is NULL.
     isFull: Linked list queues don't usually become full, until the space in the heap memory is exhausted.

