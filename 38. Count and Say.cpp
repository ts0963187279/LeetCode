class Solution {
public:
    vector<string> says = vector<string>(31,"");
    Solution(){
        says[1] = "1";
        for(int i = 2 ; i <= 30 ; i++){
            int count = 0;
            char num;
            for(int j = 0; j < says[i - 1].size() ; j++){
                num = says[i - 1][j];
                count = 1;
                while(j < says[i - 1].size() - 1 && num == says[i - 1][j + 1]){
                    count++;
                    j++;
                }
                says[i] += '0' + count;
                says[i] += num;
            }
        }
    }
    string countAndSay(int n) {
        return says[n];
    }
};
