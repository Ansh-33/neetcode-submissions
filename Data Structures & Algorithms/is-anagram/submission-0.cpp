class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int error=0;

        for(int i=0; i<s.size(); i++){
            if(s[i] != t[i]) error++;
        }
        if(error >0) return false;
        else return true;
        
    }
};
