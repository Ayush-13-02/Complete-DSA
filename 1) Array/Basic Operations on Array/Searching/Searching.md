<h2>What is Searching Algorithm?</h2>
<p>Searching Algorithms are designed to check for an element or retrieve an element from any data structure where it is stored.</p>
&nbsp;<p>Based on the type of search operation, these algorithms are generally classified into two categories:</p>
<h4>Sequential Search: </h4><p>In this, the list or array is traversed sequentially and every element is checked. For example: Linear Search.</p>
<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/20230104154936/Linear-Search1.png" alt=""/>

<h3>Complexity Analysis of Linear Search:</h3>
<h4>Time Complexity:</h4>

<h4>Best Case:</h4> In the best case, the key might be present at the first index. So the best case complexity is O(1)
<h4>Worst Case:</h4> In the worst case, the key might be present at the last index i.e., opposite to the end from which the search has started in the list. So the worst-case complexity is O(N) where N is the size of the list.
<h4>Average Case:</h4> O(N)
<h4>Auxiliary Space:</h4> O(1) as except for the variable to iterate through the list, no other variable is used. 

&nbsp;<h4>Interval Search: </h4><p>These algorithms are specifically designed for searching in sorted data-structures. These type of searching algorithms are much more efficient than Linear Search as they repeatedly target the center of the search structure and divide the search space in half. For Example: Binary Search.</p>
<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/20221121132716/BinarySearch.png" alt=""/>
