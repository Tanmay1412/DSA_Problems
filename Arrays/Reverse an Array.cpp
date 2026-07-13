/*
===============================================================================
Problem Name : Reverse an Array
Difficulty   : Easy

Topic(s)
---------
- Array
- Two Pointers

===============================================================================
Problem Overview
-------------------------------------------------------------------------------
Given an array of integers, reverse the order of its elements.

The array must be modified in-place, which means no extra array should be
used to store the reversed elements.

===============================================================================
Example
-------------------------------------------------------------------------------
Input:
arr = [1, 4, 3, 2, 6, 5]

Original Array:
[1, 4, 3, 2, 6, 5]

Swap Process:
Step 1: Swap 1 and 5
[5, 4, 3, 2, 6, 1]

Step 2: Swap 4 and 6
[5, 6, 3, 2, 4, 1]

Step 3: Swap 3 and 2
[5, 6, 2, 3, 4, 1]

Output:
[5, 6, 2, 3, 4, 1]

===============================================================================
Approach
-------------------------------------------------------------------------------
1. Use two pointers.
2. Place one pointer at the beginning of the array.
3. Place another pointer at the end of the array.
4. Swap the elements at both pointers.
5. Move the left pointer forward.
6. Move the right pointer backward.
7. Continue until both pointers meet.

===============================================================================
Algorithm
-------------------------------------------------------------------------------
1. Initialize:
      left = 0
      right = arr.size() - 1

2. While left < right:
      - Swap arr[left] and arr[right]
      - left++
      - right--

3. The array is now reversed.

===============================================================================
Time Complexity
-------------------------------------------------------------------------------
O(n)

Reason:
Each element is visited at most once.

===============================================================================
Space Complexity
-------------------------------------------------------------------------------
O(1)

Reason:
Only two pointers are used.
No extra array is created.

===============================================================================
Key Learning
-------------------------------------------------------------------------------
✔ Two Pointer Technique
✔ Swapping Elements
✔ In-place Modification
✔ Array Traversal

===============================================================================
*/

class Solution {
public:
    void reverseArray(vector<int> &arr) {

        // Pointer to the first element.
        int left = 0;

        // Pointer to the last element.
        int right = arr.size() - 1;

        // Continue until both pointers meet.
        while (left < right) {

            // Swap the elements.
            swap(arr[left], arr[right]);

            // Move the left pointer forward.
            left++;

            // Move the right pointer backward.
            right--;
        }
    }
};
