/*
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.
*/

//BINARY SEARCH SOLUTION
class Solution {

private:
    int firstOcc(vector<int> nums, int s, int e, int target){
        int mid= s + (e-s)/2;
        int index= -1;

        while(s<=e){

            if(nums[mid]==target){
                index= mid;
                //CHECK ON LEFT SIDE OF ARRAY
                e= mid-1; 
            }

            else if(nums[mid]< target){
                s= mid+1;

            }

            else{
                e=mid-1;
            }

            mid= s + (e-s)/2;
        }

        return index;
    }

    int lastOcc(vector<int> nums, int s, int e, int target){
        int mid= s + (e-s)/2;
        int index= -1;

        while(s<=e){

            if(nums[mid]==target){
                index= mid;
                //CHECK ON RIGHT SIDE OF ARRAY
                s= mid+1; 
            }

            else if(nums[mid]< target){
                s= mid+1;

            }

            else{
                e=mid-1;
            }

            mid= s + (e-s)/2;
        }

        return index;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;

        int s=0;
        int e= nums.size() -1;

        int first= firstOcc(nums, s, e, target);
        int last= lastOcc(nums, s, e, target);

        ans.push_back(first);
        ans.push_back(last);

        return ans;
        
    }
};
