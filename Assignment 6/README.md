# Assignment-1

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIT2019228  |   Anirudh Gupta | https://github.com/anirudhkgupta222 |
|    IIT2019229  |   Navneet Bhole | https://github.com/Ephiret | 
|    IIT2019230  |   Eshan Vaid | https://github.com/eshanvaid  |

**Group No-**"15"

**Faculty Name-**"Dr. Rahul Kala"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
Optimal Job scheduling.Given N jobs where every job is represented by following three elements of it. Start Time, FinishTime, Profit Associated.

---
## How to use code
To run the code, follow the following procedure:
1. Download the code(or project zip file) from the github repository.
2. Extract the zip file downloaded above.
3. Open the code with any IDE like Sublime Text, VS Code, Atom or some online compilers like GDB.
4. If required, save the code with your own desirable name and extension is .cpp
5. Run the code following the proper running commands(vary from IDE to IDE)
(a) For VS Code: Press Function+F6 key and provide the input on the terminal.
(b) For Sublime Text: Click on the Run button and provide the input.
---
**Test case**

```
Test Case-1
Input:
4
1 3 50
2 4 10
3 5 40
3 6 70
Output:
Maxmimum Profit: 120
#--------------------------#
Test Case-2
Input:
5
1 3 20
2 5 20
3 10 100
4 6  70
6 9 60
Output:
Maxmimum Profit: 150
```

---

### Theory
We have n jobs, where every job is scheduled to be done from startTime[i] to endTime[i], obtaining a profit of profit[i].\\\\We are given the startTime, endTime and profit arrays,and we have to find the maximum profit that we can get such that there are no two jobs in the subset with overlapping time range.
This problem has both properties of Dynamic Programming, Optimal Substructure and Overlapping Subprob-lems.   Like  other  Dynamic  Programming  Problems,  we can  solve  this  problem  by  making  a  table  that  stores solution of subproblems.
---

### Analysis

**Time Complexity**

Sorting takes O(nlogn) time and also when we are iterating each element to find the maximum profit till each job and then using Binary Search based function to find the latest job (before current job) that doesn't conflict with current job which also takes O(nlogn) time so the overall time complexity is O(nlogn).

**Space Complexity**

Since we are using dp array to store solutions of subproblems dp[i] stores the profit for jobs till arr[i] (including dp[i]). So the space complexity is O(n).

---

### References

1.  Dynamic Programming
    https://www.geeksforgeeks.org/dynamic-programming/
2.  https://www.geeksforgeeks.org/weighted-job-scheduling-log-n-time/
3.  https://leetcode.com/problems/maximum-profit-in-job-scheduling/
4.  Time Complexityhttps
    https://www.freecodecamp.org/news/time-complexity-of-algorithms/
5.  Space Complexityhttps
    https://en.wikipedia.org/wiki/Spacecomplexity/

