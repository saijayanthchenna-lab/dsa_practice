//Given an input string s, reverse the order of the words.
//
//A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.
//
//Return a string of the words in reverse order concatenated by a single space.
//
//Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans="";
        reverse(s.begin(),s.end());
        for(int i=0;i<n;i++){
            string words="";
            while(i<n&&s[i]!=' '){
                words+=s[i];
                i++;
            }
            reverse(words.begin(),words.end());
            if(words.length()>0){
                ans+=" "+words;

            }
        }
        return ans.substr(1);
    }
};
