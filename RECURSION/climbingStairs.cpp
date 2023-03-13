// You are climbing a staircase. It takes n steps to reach the top.

// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

//Recursive Solution
int climbStairs(int n) {

    //base case
    if(n==1 || n==0){
        return 1;
    }
    else{
        return climbStairs(n-1) + climbStairs(n-2);
    }

        
}
