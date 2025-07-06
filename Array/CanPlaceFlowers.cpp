605. Can Place Flowers

You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, 
and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

Example 1:

Input: flowerbed = [1,0,0,0,1], n = 1
Output: true

Code:

    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int count =0;
    int s=flowerbed.size();
    if(  s==1 && flowerbed[0] == 0 ){
        return true;
    }
     for(int i=0; i< s;i++ ){
        // first case : when i=0
        if(i==0 && s>1 && flowerbed[i]== 0 && flowerbed[i+1] ==0){
            count++;
            flowerbed[i] = 1; 
        }
         // any other case: 
        else if (i > 0 && i < flowerbed.size() - 1 &&
                     flowerbed[i - 1] == 0 && flowerbed[i] == 0 &&
                     flowerbed[i + 1] == 0) {
                count++;
                flowerbed[i] = 1;
            }
        else if (i== s-1 && s> 1 && 
                flowerbed[i] ==0  && 
                flowerbed[i-1] ==0){
                count++;
                flowerbed[i] = 1;
                }
     }
       if (count >= n) {
            return true;
        }

        else {
            return false;
        } 
    }
