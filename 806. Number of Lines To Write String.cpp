class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        vector<int> ans(2,0);
        for(int i=0;i<S.size();i++){
            if(ans[1]+widths[S[i]-'a'] > 100){
                ans[0]++;
                ans[1] = widths[S[i]-'a'];
            }else
                ans[1] += widths[S[i]-'a'];
        }
        ans[0]++;
        return ans;
    }
};
