/*
===============================================================================
Problem    : Find Numbers with Even Number of Digits
Difficulty : Easy

Topic(s)
---------
- Array
- Math

===============================================================================
Problem Overview
-------------------------------------------------------------------------------
You are given an array of positive integers.

Your task is to determine how many numbers in the array contain an even
number of digits.

Return the total count of such numbers.

===============================================================================
Example
-------------------------------------------------------------------------------
Input:
nums = [12, 345, 2, 6, 7896]

Digit Count:
12   -> 2 digits  (Even)
345  -> 3 digits  (Odd)
2    -> 1 digit   (Odd)
6    -> 1 digit   (Odd)
7896 -> 4 digits  (Even)

Output:
2

===============================================================================
Approach
-------------------------------------------------------------------------------
1. Traverse every number in the array.
2. Count the number of digits by repeatedly dividing the number by 10.
3. If the digit count is even, increase the answer.
4. Return the final count.

===============================================================================
Algorithm
-------------------------------------------------------------------------------
1. Initialize count = 0.
2. For every number in the array:
      a. Store the number in a temporary variable.
      b. Count its digits using a while loop.
      c. If the digit count is even, increment count.
3. Return count.

===============================================================================
Time Complexity
-------------------------------------------------------------------------------
O(n × d)

where:
n = Number of elements
d = Number of digits in each number (maximum 6)

Since each number has at most 6 digits, this is effectively O(n).

===============================================================================
Space Complexity
-------------------------------------------------------------------------------
O(1)

Only a few integer variables are used.

===============================================================================
Key Learning
-------------------------------------------------------------------------------
✔ Counting digits using division
✔ Traversing an array
✔ Using modulo (%) to check even/odd
✔ Basic mathematical operations

===============================================================================
*/

class Solution {
public:
    int findNumbers(vector<int>& nums) {

        // Stores the count of numbers having even digits.
        int count = 0;

        // Traverse each number in the array.
        for (int num : nums) {

            // Temporary variable to preserve the original number.
            int temp = num;

            // Stores the number of digits.
            int digits = 0;

            // Count digits by repeatedly dividing by 10.
            while (temp > 0) {
                digits++;
                temp /= 10;
            }

            // Check if the digit count is even.
            if (digits % 2 == 0) {
                count++;
            }
        }

        // Return the total count.
        return count;
    }
};
