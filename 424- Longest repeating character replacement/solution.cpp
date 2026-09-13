class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0;
        int maxlen=0;
        int maxfreq=0;
        vector<int> count(26,0);
        for(int right=0;right<s.length();right++){
          count[s[right]-'A']++;
          maxfreq=max(maxfreq,count[s[right]-'A']);
          int replacements=(right-left+1)-maxfreq;
          while(replacements>k){
              count[s[left]-'A']--;
              left++;
              replacements=(right-left+1)-maxfreq;
          }
          maxlen=max(maxlen,right-left+1);
        }  
        return maxlen;
      }
};