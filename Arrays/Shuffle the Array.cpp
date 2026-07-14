/*
===============================================================================
Problem    : Shuffle the Array
Difficulty : Easy

Topic(s)
---------
- Array
- Simulation

===============================================================================
Problem Overview
-------------------------------------------------------------------------------
You are given an array consisting of 2n elements in the following form:

[x1, x2, ..., xn, y1, y2, ..., yn]

Your task is to rearrange the array so that the elements appear in the
following order:

[x1, y1, x2, y2, ..., xn, yn]

Return the newly shuffled array.

===============================================================================
Example
-------------------------------------------------------------------------------
Input:
nums = [2,5,1,3,4,7]
n = 3

Split the array:

First Half  : [2,5,1]
Second Half : [3,4,7]

Shuffle Process:

2 -> 3
5 -> 4
1 -> 7

Output:
[2,3,5,4,1,7]

===============================================================================
Approach
-------------------------------------------------------------------------------
1. Create an empty result vector.
2. Traverse both halves of the array simultaneously.
3. Add one element from the first half.
4. Add the corresponding element from the second half.
5. Repeat until all elements are added.
6. Return the shuffled array.

===============================================================================
Algorithm
-------------------------------------------------------------------------------
1. Create an empty vector ans.
2. For i from 0 to n-1:
      - Push nums[i]
      - Push nums[i + n]
3. Return ans.

===============================================================================
Time Complexity
-------------------------------------------------------------------------------
O(n)

Reason:
Each element is visited exactly once.

===============================================================================
Space Complexity
-------------------------------------------------------------------------------
O(n)

Reason:
A new vector is created to store the shuffled array.

===============================================================================
Key Learning
-------------------------------------------------------------------------------
✔ Array Traversal
✔ Index Manipulation
✔ Working with Two Halves of an Array
✔ Using Vector Operations

===============================================================================
*/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        // Stores the shuffled array.
        vector<int> ans;

        // Traverse both halves simultaneously.
        for (int i = 0; i < n; i++) {

            // Add element from the first half.
            ans.push_back(nums[i]);

            // Add corresponding element from the second half.
            ans.push_back(nums[i + n]);
        }

        // Return the shuffled array.
        return ans;
    }
};
