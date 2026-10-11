class Solution {
public:
    int reverse(int x) {
        int c = x;
        int i = 0;
        while(c != 0){
            int last_digit = c % 10;
            if((i > INT_MAX / 10) || (i < INT_MIN / 10)){
                return 0;
            }
            i = i*10 + last_digit;
            c = c / 10;
        }
        return i;
    }
};