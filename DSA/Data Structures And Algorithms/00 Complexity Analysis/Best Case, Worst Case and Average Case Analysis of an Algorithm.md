
- **Best Case Analysis**: Considers the minimum resources needed when input is ideal.
- **Worst Case Analysis**: Considers the maximum resources needed when input is the most unfavorable.
- **Average Case Analysis**: Considers the expected performance over a range of inputs.

#### Example
Let's consider an example of finding the average case time complexity of a simple algorithm that searches for a specific value in an unsorted array of size n.

Algorithm:

1. Iterate through the array sequentially.
2. If the target value is found, return its index.
3. If the end of the array is reached without finding the target, return -1.

- **Best Case**: 1 comparison (if the target is the first element).
- **Worst Case**: n comparisons (if the target is not in the array).
- **Average Case**: We assume that the target is equally likely to be in any position of the array. So, on average, we would need to check (n+1)/2 elements before finding the target.

Therefore, the average case time complexity of this algorithm is O((n+1)/2), which simplifies to O(n).

#### What is log(n)?

- In binary search, with each iteration of the loop, the size of the search space is halved. 
- This halving is why the algorithm has logarithmic time complexity.
- **Example**  n / 2^x = 1 and log⁡2(n) = x
	where n is the number of inputs, and x is the number of comparisons
- ![[O(log(n)).png]]

#### Space Complexity:

- Time is not the only thing we worry about while analyzing algorithms. Space is equally important.
- Creating an array of size n (size of the input) **→** O (n) Space
- If a function calls itself recursively n times, its space complexity is O (n).