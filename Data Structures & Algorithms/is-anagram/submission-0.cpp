class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int> seen;
        for (char l : s){
            seen[l]++;
           
        }
        for(char l : t){
            seen[l]--;
            
        }
        for (auto &[ch,c]:seen)
            if(c != 0) return false;
        return true;
        
    }
};
