
  
Parenthesis matching is a process of determining whether the parentheses in an expression are correctly balanced or not. In other words, it checks if every opening parenthesis has a corresponding closing parenthesis in the correct order.

The algorithm for parenthesis matching using stacks involves the following steps:
	1. Iterate through the characters of the expression.
	2. Push opening parentheses onto the stack.
	3. When a closing parenthesis is encountered, pop the stack and match it with the opening parenthesis.
	4. If the stack is empty when trying to pop or there is a mismatch between the opening and closing parentheses, the expression has unbalanced parentheses.
	5. At the end of the iteration, if there are remaining opening parentheses in the stack, the expression has unbalanced parentheses.

Regarding the task:
	Check if the given expressions are balanced or not.
	Keep track of the number of times you push or pop elements in the stack.
	O(n) when the expression is balanced and requires iterating through each character.








