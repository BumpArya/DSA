 **Adelson-Velsky and Landis Tree**
 
Binary search tree operations are efficient when the tree is balanced (height close to log(n)), but can degrade to O(n) when the tree is skewed.
AVL trees address this issue by maintaining balance, ensuring operations remain efficient.

**Characteristics of AVL Trees**
	AVL trees are height-balanced binary search trees.
	Balance factor (BF) is the height difference between left and right subtrees.
	Criteria for AVL tree: |BF| ≤ 1 for all nodes.
	![[AVL Tree.png]]

**Maintenance of AVL Trees:**
	AVL tree becomes unbalanced during insertion of new elements.
	Rotation operations are performed to maintain balance after insertion.

 
 **Types of Rotations in AVL Trees**

**LL Rotation**
	Insertion in the left subtree of the left child.
	Right rotate (clockwise) once with respect to the first imbalance node.
	![[LL Rotation.png]]

**RR Rotation**
	Insertion in the right subtree of the right child.
	Left rotate (counter clockwise) once with respect to the first imbalance node.
	![[RR Rotation.png]]

**LR Rotation**
	Insertion in the right subtree of the left child.
    Left rotate (counter clockwise) with respect to the child of the first imbalanced node. Right rotate (clockwise) with respect to the first imbalanced node.
	![[LR Rotation 1.png]]
	![[LR Rotation 2.png]]

**RL Rotation**
	Insertion in the right subtree of the left child.
    Right rotate (clockwise) with respect to the child of the first imbalanced node. Left rotate (counter clockwise) with respect to the first imbalanced node.
    ![[RL Rotation 1.png]]
    ![[RL Rotation 2.png]]





