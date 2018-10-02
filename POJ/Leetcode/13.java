//Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
//Given an input string, calculate the Roman number value it represents
class Solution {
    public int romanToInt(String s) {
        int sum = 0;
        if (s.indexOf("IV")!=-1) sum-=2;
        if (s.indexOf("IX")!=-1) sum-=2;
        if (s.indexOf("XL")!=-1) sum-=20;
        if (s.indexOf("XC")!=-1) sum-=20;
        if (s.indexOf("CD")!=-1) sum-=200;
        if (s.indexOf("CM")!=-1) sum-=200;
        
        char[] c = s.toCharArray();
        for (int i = 0; i < s.length(); i++) {
            switch (c[i]) {
                case 'I':
                    sum += 1;
                    break;
                case 'V':
                    sum += 5;
                    break;
                case 'X':
                    sum += 10;
                    break;
                case 'L':
                    sum += 50;
                    break;
                case 'C':
                    sum += 100;
                    break;
                case 'D':
                    sum += 500;
                    break;
                case 'M':
                    sum += 1000;
                    break;
                default:
                    break;
            }
        }
        return sum;
    }
}