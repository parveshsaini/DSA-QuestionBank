/* 
Given an array nums of n integers where nums[i] is in the range [1, n],
return an array of all the integers in the range [1, n] that do not appear in nums.
*/

//SOLUTION
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int i=0;
        //sort the given array and check which index is not matching with its value
        while(i<nums.size()){
            int index= nums[i] - 1;
            if(nums[i] != nums[index]){
                swap(nums[i], nums[index]);
            }
            else{
                i++;
            }
        }

        //now check which index do not have the same element 
        for(int j=0; j< nums.size(); j++){
            if(nums[j] != j+1){
                ans.push_back(j+1);
            }
        }

        return ans;
        
    }
};
