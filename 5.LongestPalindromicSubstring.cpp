/*Author: Vector Wang*/
class Solution {
public:
    string longestPalindrome(string s) {
        string T,ans;
        int longest = 0 , longestIndex , right , center;
        T += "(";
        for(int i = 0 ; i < s.size() ; i++){
            T += "#";
            T += s[i];
        }
        T += "#)";
        vector<int> P(T.size(),0);
        center = 0;
        right = 0;
        for(int i = 0 ; i < T.size() - 1 ; i++){
            int i_mirror = 2 * center - i;
            P[i] = (right > i) ? min(right - i , P[i_mirror]) : 0;
            while(T[i + P[i] + 1] == T[i - P[i] - 1])
                P[i] ++;
            if(P[i] > longest){
                longest = P[i];
                longestIndex = i;
            }
            if(P[i] + i > right){
                center = i;
                right = P[i] + i;
            }
        }
        for(int i = 0 ; i < longest * 2; i++){
            if(T[longestIndex - longest + i] != '#')
                ans += T[longestIndex - longest + i];
        }
        return ans;
    }
};
