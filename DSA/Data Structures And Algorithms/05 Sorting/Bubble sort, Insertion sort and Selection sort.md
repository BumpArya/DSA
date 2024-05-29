
**Bubble sort:**
Largest element of unsorted part reaches final position each pass.

**Insertion sort:**
start with sorted subarray of single element and insert next element from unsorted subarray into it
with each iteration sorted subarray length increases.

**Selection sort:**
Find the index of the minimum element in the unsorted part.
Swap the minimum element with the first element of the unsorted part.

| Algorithm       | number of operations                                         | adaptive                  | stable | time complexity |
| :-------------- | :----------------------------------------------------------- | :------------------------ | :----- | :-------------- |
| Bubble <br>sort | comparisons <br>= swaps <br>= n(n - 1)/2<br><br>passes = n-1 | requires <br>modification | yes    | O(n^2)          |
| Insertion sort  | comparisons <br>= swaps <br>= n(n - 1)/2<br><br>passes = n-1 | yes                       | yes    | O(n^2)          |
| Selection sort  | comparisons <br>= n(n - 1)/2<br><br>swaps<br>= passes = n-1  | no                        | no     | O(n^2)          |

All 3 algorithms are **non-recursive and in-place**.