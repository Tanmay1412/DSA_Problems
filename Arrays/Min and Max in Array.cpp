/*
===============================================================================
Problem Name : Min and Max in Array
Difficulty   : Basic

Topic(s)
---------
- Array
- Traversal

===============================================================================
Problem Overview
-------------------------------------------------------------------------------
Given an array of integers, find the smallest (minimum) and largest
(maximum) element present in the array.

Return both values in a vector where:
Index 0 -> Minimum Element
Index 1 -> Maximum Element

===============================================================================
Example
-------------------------------------------------------------------------------
Input:
arr = [1, 4, 3, 5, 8, 6]

Output:
[1, 8]

Explanation:
Minimum Element = 1
Maximum Element = 8

===============================================================================
Approach
-------------------------------------------------------------------------------
1. Assume the first element is both the minimum and maximum.
2. Traverse the remaining elements of the array.
3. Compare each element with the current minimum and maximum.
4. Update them whenever a smaller or larger element is found.
5. Return both values.

===============================================================================
Algorithm
-------------------------------------------------------------------------------
1. Initialize:
      minimum = arr[0]
      maximum = arr[0]

2. Traverse from index 1 to n-1:
      If arr[i] < minimum
            minimum = arr[i]

      If arr[i] > maximum
            maximum = arr[i]

3. Return {minimum, maximum}.

===============================================================================
Time Complexity
-------------------------------------------------------------------------------
O(n)

Reason:
The array is traversed only once.

===============================================================================
Space Complexity
-------------------------------------------------------------------------------
O(1)

Reason:
Only two extra variables are used.

===============================================================================
Key Learning
-------------------------------------------------------------------------------
✔ Array Traversal
✔ Finding Minimum Element
✔ Finding Maximum Element
✔ Single Pass Algorithm

===============================================================================
*/

class Solution {
public:
    vector<int> getMinMax(vector<int> &arr) {

        // Assume the first element is both minimum and maximum.
        int minimum = arr[0];
        int maximum = arr[0];

        // Traverse the remaining elements.
        for (int i = 1; i < arr.size(); i++) {

            // Update minimum if a smaller element is found.
            if (arr[i] < minimum) {
                minimum = arr[i];
            }

            // Update maximum if a larger element is found.
            if (arr[i] > maximum) {
                maximum = arr[i];
            }
        }

        // Return both minimum and maximum.
        return {minimum, maximum};
    }
};
