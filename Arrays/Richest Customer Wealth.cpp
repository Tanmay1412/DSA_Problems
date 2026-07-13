/*
===============================================================================
Problem    : Richest Customer Wealth
Difficulty : Easy

Topic(s)
---------
- Array
- Matrix (2D Array)

===============================================================================
Problem Overview
-------------------------------------------------------------------------------
A bank stores the balance of multiple customers in a 2D array.

- Each row represents one customer.
- Each column represents one of that customer's bank accounts.

The wealth of a customer is the sum of money in all of their bank accounts.

Find and return the wealth of the richest customer.

===============================================================================
Example
-------------------------------------------------------------------------------
Input:

accounts = [
    [1,2,3],
    [3,2,1]
]

Customer 1 Wealth = 1 + 2 + 3 = 6
Customer 2 Wealth = 3 + 2 + 1 = 6

Output:
6

===============================================================================
Approach
-------------------------------------------------------------------------------
1. Traverse each customer (each row).
2. Calculate the total wealth of that customer.
3. Compare it with the richest wealth found so far.
4. Update the richest wealth if needed.
5. Return the richest wealth.

===============================================================================
Algorithm
-------------------------------------------------------------------------------
1. Initialize maxWealth = 0.
2. For every customer:
      - Initialize currentWealth = 0.
      - Traverse all bank accounts.
      - Add each account balance to currentWealth.
      - Update maxWealth if currentWealth is larger.
3. Return maxWealth.

===============================================================================
Time Complexity
-------------------------------------------------------------------------------
O(m × n)

where
m = Number of customers
n = Number of bank accounts

===============================================================================
Space Complexity
-------------------------------------------------------------------------------
O(1)

Only a few integer variables are used.

===============================================================================
Key Learning
-------------------------------------------------------------------------------
✔ Traversing a 2D Array
✔ Nested Loops
✔ Maintaining a Maximum Value

===============================================================================
*/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        // Stores the maximum wealth found so far.
        int maxWealth = 0;

        // Traverse each customer.
        for (const auto& customer : accounts) {

            // Stores the current customer's wealth.
            int currentWealth = 0;

            // Traverse all bank accounts of the current customer.
            for (int money : customer) {
                currentWealth += money;
            }

            // Update the richest wealth if needed.
            maxWealth = max(maxWealth, currentWealth);
        }

        // Return the richest customer's wealth.
        return maxWealth;
    }
};
