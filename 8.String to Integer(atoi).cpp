/*Author: Vector Wang*/
class Solution {
public:
    int myAtoi(string str) {
        long long ans = 0;
        bool start = false;
        int sign = 1 , non_digit_counter = 0;
        for(int i = 0 ; i < str.size() ; i++){
            if(!start && str[i] != ' '){
                start = true;
                if(str[i] == '-'){
                    sign = -1;
                    i++;
                }else if(str[i] == '+')
                    i++;
                else if(!isdigit(str[i])){
                    return 0;
                }
            }
            if(start){
                if(isdigit(str[i])){
                    ans += (int(str[i]) - int('0')) * sign;
                    i++;
                    while(isdigit(str[i])){
                        ans = ans * 10 + (int(str[i]) - int('0')) * sign;
                        i ++;
                        if(ans > INT_MAX)
                            return INT_MAX;
                        else if(ans < INT_MIN)
                            return INT_MIN;
                    }
                    return ans;
                }else
                    return 0;
            }
        }
        return ans;
    }
};
