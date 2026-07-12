/*
===============================================================================
Problem    : Find the Highest Altitude
Difficulty : Easy

Topic(s)
---------
- Array
- Prefix Sum (Running Sum)

===============================================================================
Problem Overview
-------------------------------------------------------------------------------
A cyclist starts a journey from an altitude of 0.

An integer array 'gain' represents the altitude change after each segment
of the journey. Positive values indicate an increase in altitude, while
negative values indicate a decrease.

Determine the highest altitude reached during the entire trip.

===============================================================================
Example
-------------------------------------------------------------------------------
Input:
gain = [-5, 1, 5, 0, -7]

Altitude Calculation:
Start -> 0
0 + (-5) = -5
-5 + 1   = -4
-4 + 5   = 1
1 + 0    = 1
1 + (-7) = -6

Highest Altitude = 1

===============================================================================
Approach
-------------------------------------------------------------------------------
1. Start with current altitude = 0.
2. Maintain another variable to store the highest altitude seen so far.
3. Traverse every value in the gain array.
4. Add the current gain to the current altitude.
5. Update the maximum altitude whenever a higher altitude is found.
6. Return the highest altitude.

===============================================================================
Algorithm
-------------------------------------------------------------------------------
1. Initialize:
      currentAltitude = 0
      maxAltitude = 0

2. For every gain:
      currentAltitude += gain
      maxAltitude = max(maxAltitude, currentAltitude)

3. Return maxAltitude.

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
Only two integer variables are used.

===============================================================================
Key Learning
-------------------------------------------------------------------------------
✔ Running Sum / Prefix Sum
✔ Traversing an array once
✔ Maintaining a maximum while iterating

===============================================================================
*/

class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        // Stores the biker's current altitude.
        int currentAltitude = 0;

        // Stores the highest altitude reached so far.
        int maxAltitude = 0;

        // Traverse each altitude gain/loss.
        for (int g : gain) {

            // Update the current altitude.
            currentAltitude += g;

            // Update the maximum altitude if needed.
            maxAltitude = max(maxAltitude, currentAltitude);
        }

        // Return the highest altitude reached.
        return maxAltitude;
    }
};
