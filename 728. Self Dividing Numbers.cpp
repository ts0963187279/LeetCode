class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> list;
        for(int i=left;i<=right;i++){
            int tmp = i;
            while(tmp){
                int d = tmp%10;
                if(d==0||i%d)
                    break;
                tmp /=10;
            }
            if(!tmp)
                list.push_back(i);
        }
        return list;
    }
};
