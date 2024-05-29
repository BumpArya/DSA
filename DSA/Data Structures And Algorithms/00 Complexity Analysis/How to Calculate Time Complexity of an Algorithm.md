
#### Here are some tricks to calculate complexities:

- Drop the constants
- Drop the non-dominant terms    
- Consider all variables which are provided as input

#### Time Complexity – Competitive Practice Sheet:
https://www.codewithharry.com/videos/data-structures-and-algorithms-in-hindi-5/

Question 1: The time complexity of `func1` is O(n), where n is the length of the array. This is because the function iterates through the array twice, each time performing a constant-time operation (addition or multiplication) for each element.

Question 2: The time complexity of `func` is O(n^2), where n is the input parameter. This is because the function contains nested loops, each iterating n times. As a result, the total number of iterations is proportional to n * n = n^2.

Question 3: To find the average processing time T(n), we need to analyze the recursive algorithm. The algorithm has a complexity of T(n) = T(n - 1) + T(n - 1) + 1. Solving this recurrence relation yields (building recursion tree) T(n) = O(2^n). Therefore, T(6) = O(2^6) = O(64).

Question 4:
- O(N + P), where P < N/9: Equivalent to O(N) because P is a constant fraction of N.
- O(9N-k): Equivalent to O(N) because the constants are dropped in Big O notation.
- O(N + 8log N): Equivalent to O(N) because linear terms dominate logarithmic terms.
- O(N + M^2): Not equivalent to O(N) because the quadratic term M^2 dominates the linear term N.

Question 5: The runtime of the `sum` function is O(n), where n is the number of nodes in the balanced binary search tree. This is because the function traverses each node once in a depth-first manner, and the recursion depth is proportional to the height of the tree, which is logarithmic in terms of the number of nodes.

Question 6: The complexity of the `isPrime` function is O(sqrt(n)), where n is the input number. This is because the function iterates up to the square root of n in the worst case to check for divisibility.

Question 7: The time complexity of the `isPrime` function in the snippet is O(sqrt(10000)) = O(100), which simplifies to O(1) because it is a constant time operation for all practical purposes. Therefore, the overall time complexity of `isPrime()` is O(1).

