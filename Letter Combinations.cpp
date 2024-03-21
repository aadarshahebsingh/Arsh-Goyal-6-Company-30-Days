class Solution {
public:
    void combinations(string digits,string output,int i,vector<string> &ans,string keypad[]){
        if(digits[i]=='\0'){
            ans.push_back(output);
            return;
        }
        int currEle=digits[i]-'0';
        if(currEle==0 or currEle==1)combinations(digits,output,i+1,ans,keypad);

        for(int k=0;k<keypad[currEle].size();k++){
            combinations(digits,output+keypad[currEle][k],i+1,ans,keypad);
        }
    }
    vector<string> letterCombinations(string digits) {
        string ans="";
        vector<string> output;
        if(digits=="")return output;
        string keypad[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int i=0;
        
        combinations(digits,ans,i,output,keypad);
        return output;
    }
};
