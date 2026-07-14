/*
===============================================================================
Problem    : Concatenation of Array
Difficulty : Easy

Topic(s)
---------
- Array
- Simulation

===============================================================================
Problem Overview
-------------------------------------------------------------------------------
Given an integer array 'nums' of length n, create a new array 'ans' of
length 2n.

The first half of 'ans' should contain all elements of 'nums' in the same
order, and the second half should again contain all elements of 'nums' in
the same order.

Return the concatenated array.

===============================================================================
Example
-------------------------------------------------------------------------------
Input:
nums = [1, 2, 1]

Original Array:
[1, 2, 1]

After Concatenation:
[1, 2, 1, 1, 2, 1]

Output:
[1, 2, 1, 1, 2, 1]

===============================================================================
Approach
-------------------------------------------------------------------------------
1. Create an empty vector.
2. Traverse the original array.
3. Insert each element into the new vector.
4. Traverse the array again.
5. Insert the same elements once more.
6. Return the new vector.

===============================================================================
Algorithm
-------------------------------------------------------------------------------
1. Create an empty vector ans.
2. Traverse nums:
      ans.push_back(nums[i])
3. Traverse nums again:
      ans.push_back(nums[i])
4. Return ans.

===============================================================================
Time Complexity
-------------------------------------------------------------------------------
O(n)

Reason:
The array is traversed twice.
O(n) + O(n) = O(2n) ≈ O(n)

===============================================================================
Space Complexity
-------------------------------------------------------------------------------
O(n)

Reason:
A new vector of size 2n is created.

===============================================================================
Key Learning
-------------------------------------------------------------------------------
✔ Array Traversal
✔ Vector Operations
✔ push_back()
✔ Creating a New Array
✔ Time Complexity Analysis

===============================================================================
*/

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        // Stores the concatenated array.
        vector<int> ans;

        // Insert all elements of the original array.
        for (int num : nums) {
            ans.push_back(num);
        }

        // Insert the same elements again.
        for (int num : nums) {
            ans.push_back(num);
        }

        // Return the concatenated array.
        return ans;
    }
};
