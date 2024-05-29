
Binary trees are a special type of tree where each node has a degree equal to or less than two

**Types of Binary Trees:**

**Full or Strict Binary Trees:** All nodes have a degree of 2 or 0.

**Perfect Binary Trees:** All internal nodes have a degree of 2, and leaf nodes are on the same level.

**Complete Binary Trees:** All levels are completely filled except possibly the last level, where keys must be left-aligned.

**Degenerate Trees:**
Every parent node has only one child.

**Skewed Trees:**
Parent nodes have a single child, either strictly to the left or right.

**Array Representation of Binary Trees:**
    Arrays are linear data structures, but using them to represent binary trees is inefficient.
    index of parent node = p 
	index of left child = (2 * p) + 1
	index of right child = (2 * p) + 2
    ![[Array representation of BT 1.png]]
    ![[Array representation of BT 2.png]]

**Linked Representation of Binary Trees:**
	Utilizes doubly-linked lists, distinct from linear linked lists.
	```
	struct node{
	    int data;
	    struct node* left;
	    struct node* right;
	};
	```
	![[Linked representation of BT 1.png]]
	Visual representation closely resembles a real tree.
	![[Linked representation of BT 2.png]]