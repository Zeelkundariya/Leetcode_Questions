class Solution { 
public: 
    vector<int> findAnagrams(string s, string p) { 
        int k1 = p.size(); 
        int k2 = s.size(); 
        vector<int> ans; 
        if(k2 < k1) return ans; 
        vector<int> freqP(26, 0); 
        vector<int> freqS(26, 0); 
        for(int i = 0; i < k1; i++){ 
            freqP[p[i]-'a']++; 
            freqS[s[i]-'a']++; 
        } 
        if(freqP == freqS){ 
            ans.push_back(0); 
        } 
        for(int i = k1; i < k2; i++){ 
            freqS[s[i]-'a']++; 
            freqS[s[i-k1]-'a']--; 
            if(freqP == freqS){ 
                ans.push_back(i - k1 + 1); 
            } 
        } 
        return ans; 
    } 
};