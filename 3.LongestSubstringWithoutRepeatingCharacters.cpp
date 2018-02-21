class Solution{
public:
	int lengthOfLongestSubstring(string s){
		int solution = 0;
		for(int point = 0 ; point < s.length() ; point++){
			map<char,int> stringMap;
			int counter = 0;
			for(int i = point ; i < s.length() ; i++){
				if(stringMap.count(s[i]))
					break;
				else
					counter ++;
				if(counter > solution)
					solution = counter;
				stringMap.insert(pair<char,int>(s[i],1));
			}
		}
		return solution;
	}
};
