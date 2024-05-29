
**Insertion in a BST**
	Binary search trees don't allow duplicates.
	The insertion process starts by comparing the element with the root, then traversing iteratively left or right based on its value. Left if key is lesser than root and right if greater than the root.
	It does that until it reaches a NULL (empty) position for insertion.
	A pointer tracks the correct position for insertion. (previous node in each iteration)

**Deletion in a BST**
	**Base Case**: If the root is NULL because either the tree is empty or the node doesn't exist, return NULL indicating that the tree is unchanged.
    **Search for the Node to Delete**: Traverse the tree recursively to find the node with the value key:
	    If the key is less than the current node's data, move to the left subtree.
	    If the key is greater than the current node's data, move to the right subtree.
	    If the key matches the current node's data, proceed to deletion.
	**Identify the Node to Delete**:
	    If the node to delete has no left child, replace it with its right child.
	    If the node to delete has no right child, replace it with its left child.
	    If the node to delete has both left and right children, find the in-order successor (the smallest node in the right subtree), copy its data to the current node.
	    Then replace in-order successor node with its right child (subtree)
	**Return the Updated Root**: Return the root of the modified subtree after deletion.