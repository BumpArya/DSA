
**Stack Using an Array:**
	Arrays provide constant time access to elements.
	Implementation:
	    1. Use a fixed-size array.
	    2. Maintain an index of the top element (-1 when empty).
		```struct stack{
		    int size;
		    int top;
		    int* arr;
		}```

**Implementation Example:**
    Define a stack struct and initialize its elements.
    Allocate memory using malloc for the array.

**Stack ADT Operations:**
	**isFull():** We can only push an element in this stack if there is some space left or the top is not equal to the last index (Stack Overflow). 
	**isEmpty():** We can only pop an element from this stack if some element is stored or the top is not equal to -1 (Stack Underflow). 
	
	![[isFull and isEmpty.png]]