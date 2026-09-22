//
//  main.cpp
//  9.palindrome
//
//  Created by apexpredator on 22/09/26.
//


class Solution {
public:
    bool isPalindrome(int x) {

        if (x<0)
        {
            return false;
        }

       
        int original = x;
        long long reverse= 0;
         while (x>0)
        {
            int y = x%10;
            reverse =reverse * 10 + y;
            x= x/10 ;
            
        }
        return reverse == original ;
    }
};
