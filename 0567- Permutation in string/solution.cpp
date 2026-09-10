class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> count1(26,0);
        vector<int> count2(26,0);
        int left=0;
        for(int i=0;i<s1.length();i++){
            count1[s1[i]-'a']++;
        }
        for(int right=0;right<s2.length();right++){
            count2[s2[right] - 'a']++;
            if(right-left+1>s1.length()){
                count2[s2[left]-'a']--;
                left++;
            }
            if(count1==count2){
                return true;
            }
        }
        return false;
    }
};