class Solution {
public:
    int repeat(string s, char c){
        for(size_t i = 0;i<s.size();i++){
            if(c == s[i]){
                //found
                return 1;
            }
        }
        //not found
        return 0;
    }
    int lengthOfLongestSubstring(string s) {
        
        //s consists of English letters, digits, symbols and spaces.
        string store; 

        int length = 0;
        
        //find maximum length
        int maxl=0;
        
        //start at every possible
        for(size_t i=0;i<s.size();i++){
            //check when to end
            for(size_t j = i;j<s.size();j++){
                //repeat
                if(repeat(store,s[j])){
                   //1 means substring extracted
                    if(length>maxl){
                     maxl = length;
                    }
                    //jump out of the loop
                    j = s.size()+1;
                }
                else{
                                 //add character to store
                    store += s[j];
                  length ++;
                }
   
            }
            
            //if nothing repeats at the end
            if(length>maxl){
                maxl = length;
            }
            
            store.clear();
            length = 0;

            
        }
        

        
        return maxl;
        
    }
};