/*
===============================================================================
Problem    : Move Zeroes
Difficulty : Easy

Topic(s)
---------
- Array
- Two Pointers

===============================================================================
Problem Overview
-------------------------------------------------------------------------------
Given an integer array 'nums', move all the zeroes to the end of the array
while maintaining the relative order of the non-zero elements.

The operation must be performed in-place without using an extra array.

===============================================================================
Example
-------------------------------------------------------------------------------
Input:
nums = [0,1,0,3,12]

Process:

Original Array:
[0,1,0,3,12]

Move all non-zero elements to the front:

[1,3,12,_,_]

Fill remaining positions with zeroes:

[1,3,12,0,0]

Output:
[1,3,12,0,0]

===============================================================================
Approach
-------------------------------------------------------------------------------
1. Use a pointer 'k' to track the position where the next non-zero
   element should be placed.

2. Traverse the array.

3. Whenever a non-zero element is found:
      - Place it at index k.
      - Increment k.

4. After processing all elements, fill the remaining positions
   with zeroes.

===============================================================================
Algorithm
-------------------------------------------------------------------------------
1. Initialize k = 0.
2. Traverse the array.
3. If nums[i] != 0:
      nums[k] = nums[i]
      k++
4. Fill the remaining positions with 0.
5. Array is modified in-place.

===============================================================================
Time Complexity
-------------------------------------------------------------------------------
O(n)

Reason:
The array is traversed twice.
O(n) + O(n) = O(n)

===============================================================================
Space Complexity
-------------------------------------------------------------------------------
O(1)

Reason:
No extra array is used.

===============================================================================
Key Learning
-------------------------------------------------------------------------------
✔ Two Pointer Technique
✔ In-place Array Modification
✔ Stable Ordering
✔ Array Traversal

===============================================================================
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        // Pointer to the next position for a non-zero element.
        int k = 0;

        // Move all non-zero elements to the front.
        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] != 0) {
                nums[k] = nums[i];
                k++;
            }
        }

        // Fill the remaining positions with zeroes.
        while (k < nums.size()) {
            nums[k] = 0;
            k++;
        }
    }
};
