/*
===============================================================================
Problem    : Remove Duplicates from Sorted Array
Difficulty : Easy

Topic(s)
---------
- Array
- Two Pointers

===============================================================================
Problem Overview
-------------------------------------------------------------------------------
Given a sorted array, remove duplicate elements in-place so that each
unique element appears only once.

The relative order of the unique elements must remain unchanged.

Return the total number of unique elements (k).

Note:
Only the first k elements of the array should contain the unique values.
Elements after index k-1 are ignored.

===============================================================================
Example
-------------------------------------------------------------------------------
Input:
nums = [0,0,1,1,1,2,2,3,3,4]

Process:

Unique Elements:
0 1 2 3 4

Modified Array:
[0,1,2,3,4,_,_,_,_,_]

Output:
5

===============================================================================
Approach
-------------------------------------------------------------------------------
Since the array is already sorted, duplicate elements are always adjacent.

1. Use two pointers:
      - i : Points to the last unique element.
      - j : Traverses the array.

2. Compare nums[j] with nums[i].

3. If they are different:
      - Move i forward.
      - Copy nums[j] to nums[i].

4. Continue until the end of the array.

5. Return i + 1 because array indexing starts from 0.

===============================================================================
Algorithm
-------------------------------------------------------------------------------
1. Initialize i = 0.
2. Traverse j from 1 to n-1.
3. If nums[i] != nums[j]:
      i++
      nums[i] = nums[j]
4. Return i + 1.

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
No extra memory is used.

===============================================================================
Key Learning
-------------------------------------------------------------------------------
✔ Two Pointer Technique
✔ In-place Array Modification
✔ Working with Sorted Arrays
✔ Eliminating Duplicate Elements

===============================================================================
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        // Pointer to the last unique element.
        int i = 0;

        // Traverse the array.
        for (int j = 1; j < nums.size(); j++) {

            // Found a new unique element.
            if (nums[i] != nums[j]) {

                // Move to the next position.
                i++;

                // Store the unique element.
                nums[i] = nums[j];
            }
        }

        // Number of unique elements.
        return i + 1;
    }
};
