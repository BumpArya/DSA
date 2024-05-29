
**Terminologies Used in Trees:**

**Root:** Topmost node without incoming edges but may have outgoing edges.
**Parent:** Node with edges pointing to other nodes.
**Child:** Node with edges pointing to it from other nodes.
**Internal Node:** Node with at least one child.
**Leaf/External Node:** Node with no outgoing edges and no children.
**Depth:** Number of edges from the root to a node.
**Height:** Number of edges from a node to the deepest leaf.
	n->h = max((n->l->h) - (n->r->h)) + 1;
	if (n == null) n->h = 0;

The **degree of a node** in a tree is the number of children of a node.
The **degree of a tree** is the highest degree of a node among all the nodes present in the tree.

A tree with 𝑛  nodes has 𝑛−1 edges because the root has no parent, so there's one less edge.
