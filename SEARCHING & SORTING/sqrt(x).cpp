/*
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.
*/

//Binary Search SOlution
class Solution {
public:
    int mySqrt(int x) {
        int s=0;
        int e= x;
        long mid= s +(e-s)/2;
        int ans;

        while(s<=e){
            if(mid*mid == x){
                return mid;
            }

            //search for answer on left side
            else if( mid*mid > x){
                e= mid-1;
            }

            //store the answer and search on right side to get a closer answer
            else{
                ans= mid;
                s= mid+1;
            }

            mid= s+ (e-s)/2;
        }

        return ans;

        
    }
};
