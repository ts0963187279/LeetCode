/*Author: Vector Wang*/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = 0 , left = 0 , right = height.size() - 1;
        for(int i = 0 ; i < height.size() ; i ++){
            int h = (height[left] < height[right]) ? height[left] : height[right];
            max_water = (h * (right - left) > max_water) ? h * (right - left) : max_water;
            if(height[right] > height[left])
                left ++;
            else
                right --;
        }
        return max_water;
    }
};
