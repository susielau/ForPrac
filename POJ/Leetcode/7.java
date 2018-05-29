//Given a 32-bit signed integer, reverse digits of an integer.
//For the purpose of this problem, assume that your function returns 0
//when the reversed integer overflows.
class Solution {
    public int reverse(int x) {
        StringBuilder strBuilder = new StringBuilder(Integer.toString(Math.abs(x)));
        try {
            String str = strBuilder.reverse().toString();
            return Integer.parseInt(str.replaceFirst("^0+(?!$)", "")) * (x/Math.abs(x));
        } catch (Exception e){
            return 0;
        }
    }
}