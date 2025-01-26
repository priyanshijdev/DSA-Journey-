Dp Probllem :Most Asked

if(n==0 || n==1)
        return 1;
        return climbStairs(n-1) + climbStairs(n-2);


---------------------------------------------------------------------
if(n==0 || n==1) return 1;
        //return climbStairs(n-1) + climbStairs(n-2);
        // >> prev=1, curr=1 n= 5 O?p 3
        int prev=1, curr=1;
        for(int i=2;i<=n;i++){
            int temp= curr; // temp=1  // temp =2 // temp = 
            curr=prev+curr; // curr= 2 // curr = 3
            prev= temp;   // prev = 1  // prev= 2
        }
        return curr;
