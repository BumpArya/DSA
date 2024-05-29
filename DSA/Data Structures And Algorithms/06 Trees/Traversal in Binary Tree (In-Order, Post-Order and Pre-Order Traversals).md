
![[Traversal.png]]

**Pre-Order Traversal:**
    Start with the **root** node, then visit **left** subtree, and finally **right** subtree.
    1. 4 { } { }
    2. 4 { 1 { } { } } { }
    3. 4 { 1 { 5 } { } } { }
    4. 4 { 1 { 5 } { 2 } } { }
    5. 4 { 1 { 5 } { 2 } } { 6 }

**Post-Order Traversal:**
    Visit **left** subtree, then **right** subtree, and finally the **root** node.
	1. { } { } 4
    2. { { } { } 1} { } 4
    3. { { 5 } { } 1} { } 4
    4. { { 5 } { 2 } 1} { } 4
    5. { { 5 } { 2 } 1} { 6 } 4

**In-Order Traversal:**
    Start with the **left** subtree, then visit **root** node, and finally **right** subtree.
    1. { } 4 { } 
    2. { { } 1 { } } 4 { }
    3. { { 5 } 1 { } } 4 { }
    4. { { 5 } 1 { 2 } } 4 { }
    5. { { 5 } 1 { 2 } } 4 { 6 }

Names (Pre-Order, Post-Order, In-Order) reflect the position of root node during traversal.
Left subtree is traversed before right subtree in all techniques.
In implementation we recursively visit the subtrees.

**Short trick for traversal**

**Pre-Order:**![[Short trick Pre-Order.png]]

**Post-Order:**![[Short trick Post-Order.png]]

**In-Order:**![[Short trick In-Order.png]]
