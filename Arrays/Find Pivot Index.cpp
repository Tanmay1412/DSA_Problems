/*
===============================================================================
Problem    : Find Pivot Index
Difficulty : Easy

Topic(s)
---------
- Array
- Prefix Sum

===============================================================================
Problem Overview
-------------------------------------------------------------------------------
Given an integer array 'nums', return the pivot index.

The pivot index is the index where the sum of all elements to the left
is equal to the sum of all elements to the right.

If multiple pivot indexes exist, return the leftmost one.

If no pivot index exists, return -1.

===============================================================================
Example
-------------------------------------------------------------------------------
Input:
nums = [1,7,3,6,5,6]

Process:

Total Sum = 28

Index 0:
Left Sum = 0
Right Sum = 27

Index 1:
Left Sum = 1
Right Sum = 20

Index 2:
Left Sum = 8
Right Sum = 17

Index 3:
Left Sum = 11
Right Sum = 11

Pivot Index = 3

Output:
3

===============================================================================
Approach
-------------------------------------------------------------------------------
1. Calculate the total sum of the array.
2. Initialize leftSum = 0.
3. Traverse the array.
4. Calculate:
      rightSum = totalSum - leftSum - nums[i]
5. If leftSum == rightSum:
      return i
6. Otherwise:
      leftSum += nums[i]
7. If no pivot exists, return -1.

===============================================================================
Algorithm
-------------------------------------------------------------------------------
1. Find total sum.
2. Initialize leftSum = 0.
3. Traverse each index.
4. Calculate rightSum.
5. Compare leftSum and rightSum.
6. Return the first matching index.
7. Otherwise return -1.

===============================================================================
Time Complexity
-------------------------------------------------------------------------------
O(n)

Reason:
One traversal to calculate total sum and one traversal to find pivot.

===============================================================================
Space Complexity
-------------------------------------------------------------------------------
O(1)

Reason:
Only a few extra variables are used.

===============================================================================
Key Learning
-------------------------------------------------------------------------------
✔ Prefix Sum
✔ Running Sum
✔ Array Traversal
✔ Constant Space Solution

===============================================================================
*/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        // Calculate total sum of the array.
        int totalSum = 0;

        for (int num : nums) {
            totalSum += num;
        }

        // Sum of elements on the left side.
        int leftSum = 0;

        // Traverse the array.
        for (int i = 0; i < nums.size(); i++) {

            // Calculate right side sum.
            int rightSum = totalSum - leftSum - nums[i];

            // Check if current index is pivot.
            if (leftSum == rightSum) {
                return i;
            }

            // Update left sum.
            leftSum += nums[i];
        }

        return -1;
    }
};
