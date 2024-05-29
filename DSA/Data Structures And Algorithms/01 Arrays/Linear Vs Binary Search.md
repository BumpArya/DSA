
**Linear search method**
	searches an element by traversing the array.

**Binary search method**
	Searches for an element by breaking the search space into half each time it finds the wrong element.
	The search continues towards either side of the mid, based on whether the element to be searched is lesser or greater than the mid element of the current search space.
	You can use both iterative and recursive approach to solve this problem. recursive approach requires more memory (stack) due to function calls.
	
	![[Binary Search.png]]

| **Linear Search**                        | **Binary Search**           |
| ---------------------------------------- | --------------------------- |
| Works on both sorted and unsorted arrays | Works only on sorted arrays |
| Equality operations                      | Inequality operations       |
| O(n) WC Complexity                       | O(log n) WC Complexity      |

