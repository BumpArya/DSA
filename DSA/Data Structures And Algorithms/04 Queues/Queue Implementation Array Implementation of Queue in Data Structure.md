 
Array Representation:
    Index variable "back" tracks the rearmost element for insertion.
    Insertion process involves incrementing "back" and inserting element.
    Removal process shifts elements to the left, O(n) time complexity.

Enqueue and Dequeue Operations:
	Enqueue: Increment "back", insert element, O(1) time complexity.
	![[Enqueue.png]]
    Dequeue: Remove element at index 0, shift elements left, decrement "back", O(n) time complexity.
    ![[Dequeue.png]]
    Condition for queue empty: "back = -1".
    Condition for queue full: "back = size-1".

Improved Approach:
    Introduce "front" to track cell before first element.
    Changes after introducing "front":
        Enqueue: Same as before.
        Dequeue: No need to remove element at index 0, just increment "front", O(1) time complexity.
        ![[Dequeue with front.png]]
        Condition for queue empty: "front = back".
        Condition for queue full: "back = size-1".

Implementation Structure:
    Create a structure "queue" with members: size, front, back, arr.
    Use dynamic memory allocation for "arr" to store the array.
	```
		struct queue 
		{     
			int size;    
			int front;     
			int back;     
			int* arr; 
	    };        
	```
	![[Queue.png]]
