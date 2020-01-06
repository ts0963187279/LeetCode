class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int pos = 0 , sum = 0 , largest = INT_MIN;
        for(int i = 0 ; i < nums.size() ; i++){
            sum += nums[i];
            if(largest < sum)
                largest = sum;
            if(sum < 0)
                sum = 0;
        }
        return largest;
    }
};
