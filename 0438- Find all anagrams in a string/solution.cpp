class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> count1(26,0);
        vector<int> count2(26,0);
        int left=0;
        vector<int> ans;
        for(int i=0;i<p.length();i++){
            count2[p[i]-'a']++;
        }
        for(int right=0;right<s.length();right++){
            count1[s[right]-'a']++;
            if(right-left+1>p.length()){
                count1[s[left]-'a']--;
                left++;
            }
            if(count1==count2){
                ans.push_back(left);
            }
        }
        return ans;
    }
};