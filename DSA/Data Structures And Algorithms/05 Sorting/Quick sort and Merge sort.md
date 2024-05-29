
**Quick sort:**

**Partitioning**: Rearranging the elements in the array such that all elements smaller than the pivot are placed before it, and all elements greater than the pivot are placed after it.

**Divide and Conquer**: Quick Sort divides the array into smaller subarrays and recursively sorts them.

**Implementation Steps**:
1. Choose the pivot (typically the first element in the unsorted subarray).
2. Partition the array based on the pivot.
3. Recursively apply Quick Sort to the left and right subarrays.

**Merge sort:**

**Divide and Conquer**:
Divide the array into two halves.
Recursively apply Merge Sort to each half.

**Merge**:
Merge the sorted halves into a single sorted array.
Compare elements from each half and place them in order into an auxiliary array.
Copy auxiliary array into main array.

| Algorithm  | stable | In place | time complexity                                                                                                                                                |
| ---------- | ------ | -------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Quick sort | no     | yes      | best case: O(n log n)<br>when the array is divided into almost equal subarrays at each partition<br><br>worst case: O(n^2)<br>when the array is already sorted |
| Merge sort | yes    | no       | O(n log n)                                                                                                                                                     |

both algorithms are **non-adaptive and recursive**.