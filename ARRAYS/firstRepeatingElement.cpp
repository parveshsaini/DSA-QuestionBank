// Given an array arr[] of size n, find the first repeating element.
// The element should occur more than once and the index of its first occurrence should be the smallest.

// Note:- The position you return should be according to 1-based indexing. 

//SOLUTION
class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        unordered_map<int,int> hash;
        //counting the occurence of each element
        for(int i=0; i<n; i++){
            hash[arr[i]]++;
        }
        
        //finding the first repeating
        for(int i=0; i<n; i++){
            if(hash[arr[i]]>1){
                return i+1;
            }
        }
        
        return -1;
    }
};
