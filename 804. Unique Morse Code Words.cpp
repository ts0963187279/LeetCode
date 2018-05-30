class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> table = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> tmp;
        for(int i=0;i<words.size();i++){
            string str="";
            for(int j=0;j<words[i].size();j++)
                str+=table[words[i][j]-'a'];
            if(tmp.find(str)==tmp.end())
                tmp.insert(str);
        }
        return tmp.size();
    }
};
