//Problem
/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.
*/

//Solution
class Solution {
public:
    void sortColors(vector<int>& nums) {

        //THREE POINTER APPROACH
        int low=0, med=0;
        int high= nums.size() - 1;

        while(med<=high){
            if(nums[med]==0){
                swap(nums[low], nums[med]);
                low++;
                med++;
            }

            else if(nums[med]==1){
                med++;
            }

            else{
                swap(nums[med], nums[high]);
                high--;
            }
        }
        
    }
};
