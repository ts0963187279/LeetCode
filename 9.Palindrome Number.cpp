/*Author: Vector Wang*/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        string num;
        while(x){
            num += char(int('0') + x % 10);
            x /= 10;
        }
        for(int i = 0,rpos = num.size() - 1 ; i < num.size() / 2 ; i++,rpos--){
            if(num[i] != num[rpos])
                return false;
        }
        return true;
    }
};
