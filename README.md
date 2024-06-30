# DAY-18

Increasing Triplet Subsequence

Problem Statement

Given an integer array nums, return true if there exists a triple of indices (i, j, k) such that i < j < k and nums[i] < nums[j] < nums[k]. If no such indices exists, return false.

Solution Approach 

Taken three variables first,two,three intialised them to INT_MAX. Have updated three values simultaneously based one given condition (i.e first<two<three && i<j<k) & kept a flag value a,b,c & updated them when updating first ,two , three values parallely , this is to check if triplet is there or not.Returned boolean accordingly. 
