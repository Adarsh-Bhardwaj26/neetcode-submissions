class Solution {
public:
    bool isAnagram(string s, string t) {
        int chart[26] = {0};
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            chart[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            chart[t[i]-'a']--;
            if( chart[t[i]-'a']<0){
                return false;
            }
        }
        return true;
    }
};
