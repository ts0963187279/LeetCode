/*Author: Vector Wang*/
class Solution {
public:
    string longestPalindrome(string s) {
        string T,ans;
        int longest = 0 , longestIndex , left , right;
        for(int i = 0 ; i < s.size() ; i++){
            T += "#";
            T += s[i];
        }
        T += "#";
        vector<int> P(T.size(),0);
        for(int i = 0 ; i < T.size() ; i++){
            left = i - 1;
            right = i + 1;
            while(T[left] == T[right] && left >= 0 && right < T.size()){
                P[i] ++;
                left --;
                right ++;
            }
            if(P[i] > longest){
                longest = P[i];
                longestIndex = i;
            }
        }
        for(int i = 0 ; i < longest * 2; i++){
            if(T[longestIndex - longest + i] != '#')
                ans += T[longestIndex - longest + i];
        }
        return ans;
    }
};
