
**push():**
    1. Check if stack is full using isFull function.
    2. If not full, increment top by 1 and insert element at index top.
    
    ![[push.png]]

**pop():**
    1. Check if stack is empty using isEmpty function.
    2. If not empty, store topmost element in a temporary variable.
    3. Decrement top by 1 and return the temporary variable holding the popped element.\
    
    ![[pop.png]]

**peek():**
	 1. Index calculation (top - position + 1).
	 2. Check if the index is valid for the current stack.
	 ![[peek.png]]

**top():** Returning the topmost element in a stack.

**bottom():** Returns the bottommost element in a stack.

**Time Complexities:** O(1) for all operations.
