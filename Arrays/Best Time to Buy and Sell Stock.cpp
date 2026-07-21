/*
===============================================================================
Problem    : Best Time to Buy and Sell Stock
Difficulty : Easy

Topic(s)
---------
- Array
- Greedy
- Dynamic Programming (Concept)

===============================================================================
Problem Overview
-------------------------------------------------------------------------------
You are given an array where prices[i] represents the stock price on the
i-th day.

Choose one day to buy one stock and another future day to sell it.

Return the maximum profit you can make.

If no profit is possible, return 0.

===============================================================================
Example
-------------------------------------------------------------------------------
Input:
prices = [7,1,5,3,6,4]

Process:

Lowest Price = 7

Day 2:
Price = 1
Lowest Price = 1

Day 3:
Profit = 5 - 1 = 4

Day 5:
Profit = 6 - 1 = 5 (Maximum)

Output:
5

===============================================================================
Approach
-------------------------------------------------------------------------------
1. Keep track of the minimum price seen so far.
2. For every price:
      - Update the minimum price if needed.
      - Calculate today's profit.
      - Update the maximum profit.
3. Return the maximum profit.

===============================================================================
Algorithm
-------------------------------------------------------------------------------
1. Initialize:
      minPrice = prices[0]
      maxProfit = 0

2. Traverse the array.
3. Update minimum price.
4. Calculate current profit.
5. Update maximum profit.
6. Return maximum profit.

===============================================================================
Time Complexity
-------------------------------------------------------------------------------
O(n)

Reason:
Only one traversal of the array is required.

===============================================================================
Space Complexity
-------------------------------------------------------------------------------
O(1)

Reason:
Only two variables are used.

===============================================================================
Key Learning
-------------------------------------------------------------------------------
✔ Greedy Algorithm
✔ Tracking Minimum Value
✔ Single Pass Traversal
✔ Maximum Difference Problem

===============================================================================
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // Minimum price seen so far.
        int minPrice = prices[0];

        // Maximum profit.
        int maxProfit = 0;

        // Traverse the array.
        for (int i = 1; i < prices.size(); i++) {

            // Update minimum buying price.
            minPrice = min(minPrice, prices[i]);

            // Calculate today's profit.
            int profit = prices[i] - minPrice;

            // Update maximum profit.
            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
    }
};
