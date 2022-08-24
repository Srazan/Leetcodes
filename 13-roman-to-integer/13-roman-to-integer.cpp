class Solution {
public:
    int convert(char c) {
        switch(c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }
        return 0;
    }
    int romanToInt(string s) {
        int sum=0;
        for(int i=0; i<s.length()-1; i++) {
            if(convert(s[i])<convert(s[i+1]))sum-= convert(s[i]);
            else  sum+= convert(s[i]);
        }
        return sum+convert(s[s.length()-1]);
    }
};