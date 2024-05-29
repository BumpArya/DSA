
Linear Queue Limitation:
    Queue becomes full even when there's space left after dequeuing, leading to inefficiency.

Introduction to Circular Queues:
    Circular queues aim to utilize all array space efficiently.
    Initialize front and back to 0. Since -1 is unreachable in circular incrementation.
    ![[Circular queue.png]]

 Circular Queue Implementation:
	Focuses on incrementing indices circularly to avoid overflow.
    Increment formula: **(i + 1) % size** ensures indices repeat from the beginning when reaching array threshold.

Enqueue Operation:
    Inserting a new element into the queue.
    Check if the next index to the rear is the front, indicating queue full (overflow).
    If not full, circularly increment rear by 1 and insert the new element.
    ![[Circular enqueue.png]]

Dequeue Operation:
    Deleting the first-inserted element from the queue.
    Check if the front equals the back, indicating queue empty (underflow).
    If not empty, circularly increment front by 1 and remove the element.
    ![[Circular dequeue.png]]

 Condition Checks:   
    isEmpty: front equals rear indicates an empty queue.
    isFull: (back+1)%size equals front indicates a full queue..