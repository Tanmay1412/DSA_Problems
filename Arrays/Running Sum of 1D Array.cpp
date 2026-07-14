/*
===============================================================================
Problem    : Running Sum of 1D Array
Difficulty : Easy

Topic(s)
---------
- Array
- Prefix Sum

===============================================================================
Problem Overview
-------------------------------------------------------------------------------
Given an integer array 'nums', calculate the running sum of the array.

The running sum at any index is the sum of all elements from the beginning
of the array up to that index.

Running Sum:
runningSum[i] = nums[0] + nums[1] + ... + nums[i]

Return the updated array containing the running sums.

===============================================================================
Example
-------------------------------------------------------------------------------
Input:
nums = [1, 2, 3, 4]

Running Sum Calculation:

Index 0 : 1
Index 1 : 1 + 2 = 3
Index 2 : 3 + 3 = 6
Index 3 : 6 + 4 = 10

Output:
[1, 3, 6, 10]

===============================================================================
Approach
-------------------------------------------------------------------------------
1. Start traversing from index 1.
2. Add the previous running sum to the current element.
3. Store the updated value in the same array.
4. Continue until the last element.
5. Return the modified array.

===============================================================================
Algorithm
-------------------------------------------------------------------------------
1. Traverse the array from index 1 to n-1.
2. Update each element:
      nums[i] += nums[i - 1]
3. Return nums.

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
The running sum is calculated by modifying the original array.
No additional array is used.

===============================================================================
Key Learning
-------------------------------------------------------------------------------
✔ Prefix Sum
✔ Running Sum
✔ In-place Array Modification
✔ Single Pass Traversal

===============================================================================
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        // Traverse the array from the second element.
        for (int i = 1; i < nums.size(); i++) {

            // Add the previous running sum to the current element.
            nums[i] += nums[i - 1];
        }

        // Return the modified array.
        return nums;
    }
};
