/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.
*/

//SOLUTION

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        // CREATING ARRAY `MARK` WHICH KEEPS COUNT OF WHICH ELEMENT IS VISITED
        vector<int> mark(nums.size());
        for(int i=0; i<nums.size(); i++){
            mark[i]=1;
        }

        //IF VISITED, DECREMENT MARK => MARK =0 ()IF VISITED ONCE)
        for(int j=0; j<nums.size(); j++){
            mark[nums[j]]--;
        }

        //IF MARK[i]< 0 => ELEMENT IS VISITED TWICE
        for(int k=0; k<nums.size(); k++){
            if(mark[k]<0){
                return k;
            }
        }

        return 0;
    }

        
};
