/*
===============================================================================
Problem    : Remove Element
Difficulty : Easy

Topic(s)
---------
- Array
- Two Pointers

===============================================================================
Problem Overview
-------------------------------------------------------------------------------
Given an integer array 'nums' and an integer 'val', remove all occurrences
of 'val' from the array in-place.

The order of the remaining elements may change.

Return the number of elements that are not equal to 'val'.

Note:
Only the first k elements of the array should contain the valid elements.
Elements after index k-1 are ignored.

===============================================================================
Example
-------------------------------------------------------------------------------
Input:
nums = [3,2,2,3]
val = 3

Process:

Original Array:
[3,2,2,3]

Remove all occurrences of 3.

Modified Array:
[2,2,_,_]

Output:
2

===============================================================================
Approach
-------------------------------------------------------------------------------
1. Use one pointer (k) to keep track of the next valid position.
2. Traverse the array using another pointer (i).
3. If nums[i] is not equal to val:
      - Copy nums[i] to nums[k].
      - Move k forward.
4. Ignore all elements equal to val.
5. Return k.

===============================================================================
Algorithm
-------------------------------------------------------------------------------
1. Initialize k = 0.
2. Traverse the array.
3. If nums[i] != val:
      nums[k] = nums[i]
      k++
4. Return k.

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
The array is modified in-place.
No extra memory is used.

===============================================================================
Key Learning
-------------------------------------------------------------------------------
✔ Two Pointer Technique
✔ In-place Array Modification
✔ Filtering Elements
✔ Single Pass Traversal

===============================================================================
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        // Points to the next valid position.
        int k = 0;

        // Traverse the array.
        for (int i = 0; i < nums.size(); i++) {

            // Keep only elements that are not equal to val.
            if (nums[i] != val) {

                nums[k] = nums[i];
                k++;
            }
        }

        // Return the number of remaining elements.
        return k;
    }
};
