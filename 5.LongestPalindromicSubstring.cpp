/*Author: Vector Wang*/
class Solution {
public:
    string longestPalindrome(string s) {
        int max = 0;
        string ans;
        for(int i = 0 ; i < s.size() ; i++){
            string str = "";
            for(int j = 0 ; j < s.size() - i ; j ++){
                bool cycle = true;
                str += s[i + j];
                if(s[i] == s[i + j]){
                    for(int k = 0 ; k < str.size() / 2 ; k++){
                        if(str[k] != str[str.size() - k - 1]){
                            cycle = false;
                            break;
                        }
                    }
                    if(cycle && str.size() > max){
                        max = str.size();
                        ans = str; 
                    }  
                }
            }
        }
        return ans;
    }
};
