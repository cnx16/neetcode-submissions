class Solution {
public:
    uint32_t reverseBits(uint32_t &n) {
           for (int i = 0; i < 16; i++) {
            int j = 31 - i;
            uint32_t bi = (n >> i) & 1;
            uint32_t bj = (n >> j) & 1;
            if (bi != bj) {
                n ^= (1u << i) | (1u << j);  // flip both bits: this swaps them
            }
        }
        return n;
    }
};
