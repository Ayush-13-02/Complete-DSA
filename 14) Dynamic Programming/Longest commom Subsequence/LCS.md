<h2>Given two strings, S1 and S2, the task is to find the length of the Longest Common Subsequence, i.e. longest subsequence present in both of the strings. </h2>

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

<h4>Method-1 (Tabulation Approach):</h4>