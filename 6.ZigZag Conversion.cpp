/*Author: Vector Wang*/
class Solution {
public:
    string convert(string s, int numRows) {
        string ans;
        string zig_zag[numRows];
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
        for(int i = 0 ; i < numRows ; i++)
            ans += zig_zag[i];
        return ans;
    }
};
