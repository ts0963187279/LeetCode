/*Author: Vector Wang*/
class Solution {
public:
    string convert(string s, int numRows) {
        string ans;
        vector<vector<char> > zig_zag(numRows);
        if(numRows == 1 || numRows == s.size())
            return s;
        int i = 0 , j = 0 , direction = -1;
        while(i != s.size()){
            zig_zag[j].push_back(s[i]);
            if(j == 0 || j == numRows - 1)
                direction *= -1;
            j += direction;
            i++;
        }
        for(int i = 0 ; i < zig_zag.size() ; i++)
            for(int j = 0 ; j < zig_zag[i].size() ; j++)
                ans.push_back(zig_zag[i][j]);
        return ans;
    }
};
