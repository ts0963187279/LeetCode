/*Author: Vector Wang*/
class Solution {
public:
    string intToRoman(int num) {
        map<int,string> table;
        table[1000] = "M";
        table[900] = "CM";
        table[500] = "D";
        table[400] = "CD";
        table[100] = "C";
        table[90] = "XC";
        table[50] = "L";
        table[40] = "XL";
        table[10] = "X";
        table[9] = "IX";
        table[5] = "V";
        table[4] = "IV";
        table[1] = "I";
        vector<int> list(13);
        list[0] = 1000;
        list[1] = 900;
        list[2] = 500;
        list[3] = 400;
        list[4] = 100;
        list[5] = 90;
        list[6] = 50;
        list[7] = 40;
        list[8] = 10;
        list[9] = 9;
        list[10] = 5;
        list[11] = 4;
        list[12] = 1;
        string roman;
        int list_index = 0;
        while(num){
            for(int i = 0 ; i < num / list[list_index] ; i++)
                roman += table[list[list_index]];
            num %= list[list_index];
            list_index ++;
        }
        return roman;
    }
};
