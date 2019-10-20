1.cpp
Given an integer array, find if an integer p exists in the array such that the number of integers greater
than p in the array equals to p
If such an integer is found return 1 else return -1.
link : https://www.interviewbit.com/problems/noble-integer/

2.cpp
Given numRows, generate the first numRows of Pascal’s triangle.
Hint : C = (C*(line-i))/i; line from 1 to n and i from 1 to line
link : https://www.interviewbit.com/problems/pascal-triangle/

3.cpp
You are in an infinite 2D grid where you can move in any of the 8 directions :
 (x,y) to 
    (x+1, y), 
    (x - 1, y), 
    (x, y+1), 
    (x, y-1), 
    (x-1, y-1), 
    (x+1,y+1), 
    (x-1,y+1), 
    (x+1,y-1) 
You are given a sequence of points and the order in which you need to cover the points. 
Give the minimum number of steps in which you can achieve it. You start from the first point.

Input : [(0, 0), (1, 1), (1, 2)]
Output : 2
link : https://www.interviewbit.com/problems/min-steps-in-infinite-grid/

4.cpp
Given a set of non-overlapping intervals, insert a new interval into the intervals (merge if necessary).
You may assume that the intervals were initially sorted according to their start times.
Example 1:
Given intervals [1,3],[6,9] insert and merge [2,5] would result in [1,5],[6,9].
Example 2:
Given [1,2],[3,5],[6,7],[8,10],[12,16], insert and merge [4,9] would result in [1,2],[3,10],[12,16].
This is because the new interval [4,9] overlaps with [3,5],[6,7],[8,10].
Make sure the returned intervals are also sorted.
link : https://www.interviewbit.com/problems/merge-intervals/