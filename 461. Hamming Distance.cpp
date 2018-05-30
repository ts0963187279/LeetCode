class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = x^y;
        int c = 0;
        while(ans){
            if(ans & 1)
                c++;
            ans =(ans>>1);
        }
        return c;
    }
};
