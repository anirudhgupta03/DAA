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
Use divide and conquer to find stain in a cloth image.Take assumption for cloth image by your own

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

**Test case**

```
Test Case-1
Input:
5 8
250 250 250 250 250 250 250 250
250 180 150 180 250 250 250 250
250 70 20 50 250 250 250 250
250 180 10 180 250 250 250 250
250 250 250 250 250 250 250 250
Output:
10
#--------------------------#
Test Case-2
Input:
Input:
5 8
250 250 250 250 250 250 250 250
250 180 150 180 250 250 250 250
250 70 20 0 250 250 250 250
250 180 10 180 250 250 250 250
250 250 250 250 250 250 250 250
Output:
0
```

---

### Theory
Each of the pixels that represents an image stored insidea computer has a pixel value which describes how bright that pixel is, and/or what color it should be. For a grayscale images, the pixel value is a single number that represents the brightness of the pixel.The most common pixel format is the byte image, where this number is stored as an 8-bit integer giving a range of possible values from 0 to 255.Typically zero is taken to be black, and 255 is taken to be white. Values in between make up the different shades of gray.  
Binary Search has  been  used  to  solve  above  mentioned problem.The  idea  of  binary  search is to use the fact that each row of the above matrix is either constant or is first decreasing upto a point(which will be the least element of the row) then increasing (opposite of Bitonic sequence) and hence the time complexity is reduced to mlog(n) where m = number of rows, n = number of columns.

---

### Analysis

**Time Complexity**

We are iterating each row and thenusing binary search we are finding out the minimum el-ement in the row so the overall time complexity wouldbe O(mlogn) where m = number of rows, n = number of columns.

**Space Complexity**

Since  we  have  not  used  any  extradata structure in our algorithm so the space complexity would be O(1).

---

### References

1.  Introduction to Divide and Conquer Technique
    https://www.geeksforgeeks.org/divide-and-conquer-algorithm-introduction/
2.  Find an element in Bitonic arrayhttps:
    https://www.geeksforgeeks.org/find-element-bitonic-array/
3.  Pixel Valueshttps
    https://homepages.inf.ed.ac.uk/rbf/HIPR2/value.htm/
4.  Digital Image Basicshttps
    https://www.whydomath.org/node/wavlets/imagebasics.html/
5.  Time Complexityhttps
    https://www.freecodecamp.org/news/time-complexity-of-algorithms/
6.  Space Complexityhttps
    https://en.wikipedia.org/wiki/Spacecomplexity/

