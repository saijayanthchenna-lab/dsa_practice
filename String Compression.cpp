//Given an array of characters chars, compress it using the following algorithm:
//
//Begin with an empty string s. For each group of consecutive repeating characters in chars:
//
//If the group's length is 1, append the character to s.
//Otherwise, append the character followed by the group's length.

class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int idx=0;
        for(int i=0;i<n;i++){
            char ch=chars[i];
            int count=0;
            while(i<n && ch==chars[i]){
                count++;
                i++;
            }
            i--;
            
            if (count==1) {
                chars[idx++]=ch;
            }
            else{
                chars[idx++]=ch;
                string str=to_string(count);
                for(char dig:str){
                    chars[idx++]=dig;
                }
            }
        
    }
    return idx;
}
};

