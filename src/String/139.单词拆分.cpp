class Solution {
public:
    bool wordBreak(string& s, vector<string>& wordDict) {
        const int len = s.length();
        vector<bool> flag(len + 1, false);
        set<string> buf(wordDict.begin(), wordDict.end());
        
        int minlen = 0, maxlen = 0;
        for (auto& str : wordDict) {
            const int tl = str.length();
            maxlen = max(maxlen, tl);
            if (minlen == 0 || tl < minlen)
                minlen = tl;
        }
     
        flag[0] = true;
        for (int i = minlen; i <= len; ++i) {
            for (int j = max(0, i - maxlen); j < i; ++j) {
                if (flag[j] && (buf.find(s.substr(j, i-j)) != buf.end())) {
                    flag[i] = true;
                    break;
                }
            }
        }
        
        return flag[len];
    }
};