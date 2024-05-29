
**Base Case**
	If the current node (n) is NULL, insertion location is found create a new node with the given key and return it.

**Recursive Insertion:**
	If the key to be inserted is less than the current node's data, insert the key into the left subtree.
	If the key to be inserted is greater than the current node's data, insert the key into the right subtree.

**Update Height:**
	After insertion, update the height of the current node.

**Calculate Balance Factor:**
	Calculate the balance factor of the current node to check if it has become unbalanced.

**Balance the Tree:**
	**Left Left Case (LL):**
		If the balance factor is greater than 1 and the key is less than the left child's data, perform a right rotation, return rotated node(y).
		![[L Rotation.png]]
	**Right Right Case (RR):**
		If the balance factor is less than -1 and the key is greater than the right child's data, perform a left rotation, return rotated node(x).
		![[R Rotation.png]]
	**Left Right Case (LR):**
		If the balance factor is greater than 1 and the key is greater than the left child's data, perform a left rotation on the left child followed by a right rotation on the current node, return the rotated node.
	**Right Left Case (RL):**
		If the balance factor is less than -1 and the key is less than the right child's data, perform a right rotation on the right child followed by a left rotation on the current node, return the rotated node.

**Return the Current Node:**
		Return the updated node if no rotations are performed.