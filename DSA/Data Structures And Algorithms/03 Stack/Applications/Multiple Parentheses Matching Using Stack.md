
The algorithm for parenthesis matching using stacks involves the following steps:
	1. Iterate through the characters of the expression.
	2. Push opening parentheses of any type ('(', '{', '[') onto the stack.
	3. When encountering a closing parenthesis, check if the stack is not empty.
	4. Pop the topmost character from the stack and check if it matches the type of the closing parenthesis.
	5. If the types match, continue checking further characters.
	6. If the types don't match or the stack is empty when encountering a closing parenthesis, declare the parentheses unbalanced.
	7. At the end of the iteration, if the stack becomes empty, declare the parentheses balanced; otherwise, declare them unbalanced.

Flow chart:
	![[Multiple Parentheses Matching Flow chart.png]]
