class Solution {
public:
    bool isSubsequence(string s, string t) {
        int a = s.size();
        int b = t.size();
        int n=0, m=0, flag = 0;

        while(n !=a && m != b){
            if(s[n] == t[m]){
                flag++;
                n++;
            }
            m++;
        }
        if(flag == a) return true;
        else return false;
    }
};