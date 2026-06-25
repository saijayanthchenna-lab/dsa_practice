//Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.
//
//In other words, return true if one of s1's permutations is the substring of s2.

class Solution {
public:
    bool isFreqsame(int freq1[],int freq2[]){
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        for(int i=0;i<s1.length();i++){
            freq[s1[i]-'a']++;
        }
        int windsize=s1.length();
        for(int i=0;i<s2.length();i++){
            int wiId=0;
            int idx=i;
            int wfreq[26]={0};
            while(wiId<windsize && idx<s2.length()){
                wfreq[s2[idx]-'a']++;
                wiId++;
                idx++;

            }
            if(isFreqsame(freq,wfreq)){
                return true;
            }
        }
        return false;
    }
};
