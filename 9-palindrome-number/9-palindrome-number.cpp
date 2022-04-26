class Solution {
public:
    bool isPalindrome(int x) {
        
        long rev=0,val;
        val = x;
        while(x > 0) {
         rev = rev * 10 + x % 10;
        x = x / 10;
        }
        if(val==rev){
            return true;
        }else{
            return false;
        }
             
    }
};