class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
            unsigned carry = (unsigned)(a & b) << 1;  // bits that carry over
            a = a ^ b;                                // sum without carries
            b = carry;
        }
        return a;  
        
    }
};
