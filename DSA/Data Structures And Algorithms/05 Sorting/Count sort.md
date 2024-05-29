
**Count Sort:**

**Algorithm:**
1. Find the maximum element in the given array.
2. Create a count array of size max+1 and initialize all elements to 0.
3. Traverse the given array and increment the count of each element in the count array.
4. Iterate through the count array and fill in the sorted array based on the count of each element.
5. The array is now sorted.

**Time Complexity:** Count Sort has a time complexity of O(n+m), where n is the number of elements. m is the maximum element in the array.

**not stable, non adaptive and not in-place**