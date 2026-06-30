class Solution {
public:
    int appendCharacters(string s, string t) {
        int n = s.size();
        int m = t.size();
        int a=0, b=0, flag=0;

        while( a<n && b<m){
            if(s[a] == t[b]){
                flag++;
                b++;
            }
            a++;
        }

        return m - flag;

    }
};