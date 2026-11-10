class Solution {
public:

    string encode(vector<string>& strs) {
                if(strs.empty()){
            return "[]";
        }
        stringstream ss;
        ss<<"[";
        for(int i=0;i<strs.size();i++){
            ss << quoted(strs[i]);
            if(i!=strs.size()-1)
                ss<<", ";
        }
        ss<<"]";
        return ss.str();
    }

    vector<string> decode(string s) {
        vector<string> ans;
        if(s=="[]")
            return ans;
        stringstream s2(s);
        char ch;
        string x;
        s2>>ch;
        while(s2>>quoted(x)){
            ans.push_back(x);
            if(!(s2>>ch))
                break;
            if(ch==']')
                break;
        }
        return ans;
    }
};
