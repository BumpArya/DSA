
**Binary Search Trees (BSTs):**
    BSTs are a type of binary tree.
     Key properties:
        Nodes in the left subtree are smaller than the parent node.
        Nodes in the right subtree are greater than the parent node.
        Both left and right subtrees are binary trees.
        No duplicate nodes allowed.

In-Order traversal of BST results in a sorted array.

**Checking if a binary tree is a binary search tree or not**
	The algorithm checks whether a given binary tree is a Binary Search Tree (BST). 
		It employs an in-order traversal, using a static variable prev to track the previously visited node. 
		At each step, it recursively checks the left subtree, ensures the current node's value is greater than the previously visited node's value, updates prev, and recursively checks the right subtree. 
		If any violation of the BST property is encountered, it returns 0 otherwise, it returns 1 if the entire tree is traversed successfully without any violations.

**Searching in a Binary Search Trees**
	BSTs allow for efficient searching of keys
	The time complexity of searching in a BST is O(log n) in the best case and O(n) in the worst case
	The algorithm searches the given key using the pointer to the root node. 
		If the root is NULL, it returns NULL indicating the key is not found. 
		If the key matches the data in the root node, it returns the root node. 
		Otherwise, it recursively / iteratively search the left subtree if the key is smaller than the root's data or the right subtree if the key is larger.
