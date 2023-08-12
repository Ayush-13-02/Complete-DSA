<h3>Given two strings, S1 and S2, the task is to find the length of the Longest Common Subsequence, i.e. longest subsequence present in both of the strings. </h3>

E.g.
    S1 = AGGTAB, S2 = GXTXAYB

<h4>Method-1 (Recursive Approach):</h4>
Generate all the possible subsequences and find the longest among them that is present in both strings using recursion.
Follow the below steps to implement the idea:

    Create a recursive function [say lcs()].
    Check the relation between the First characters of the strings that are not yet processed.
    Depending on the relation call the next recursive function as mentioned above.
    Return the length of the LCS received as the answer.
Time Complexity = O(2^n*m)
Space Complexity = O(1)
<h4>Method-2 (Memoization Approach)</h4>
 
                            L(“AXYT”, “AYZX”)
                            /               \
                 L(“AXY”, “AYZX”)           L(“AXYT”, “AYZ”)
                    /       \                    /         \
        L(“AX”, “AYZX”) L(“AXY”, “AYZ”)   L(“AXY”, “AYZ”)  L(“AXYT”, “AY”)

Because of the presence of these two properties we can use Dynamic programming or Memoization to solve the problem. Below is the approach for the solution using recursion.

    Create a recursive function. Also create a 2D array to store the result of a unique state. 
    During the recursion call, if the same state is called more than once, then we can directly return the answer stored for that state instead of calculating again.
Time Complexity: O(m * n) where m and n are the string lengths.
Auxiliary Space: O(m * n) Here the recursive stack space is ignored.

<h4>Method-3 (Tabulation Approach):</h4>

Create a 2D array dp[][] with rows and columns equal to the length of each input string plus 1 [the number of rows indicates the indices of S1 and the columns indicate the indices of S2].
Initialize the first row and column of the dp array to 0.
Iterate through the rows of the dp array, starting from 1 (say using iterator i).

For each i, iterate all the columns from j = 1 to n:

    If S1[i-1] is equal to S2[j-1], set the current element of the dp array to the value of the element to (dp[i-1][j-1] + 1).
    Else, set the current element of the dp array to the maximum value of dp[i-1][j] and dp[i][j-1].
    After the nested loops, the last element of the dp array will contain the length of the LCS.