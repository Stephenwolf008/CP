class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2!=0)
            return false;
        vector<char> stack;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
                stack.push_back(s[i]);
            else if(s[i]=='{')
                stack.push_back(s[i]);
            else if(s[i]=='[')
                stack.push_back(s[i]);
            else if(stack.size()!=0 && stack.back()=='(' ){
                if(s[i]==')')
                stack.pop_back();
                else return false;}
            else if(stack.size()!=0 && stack.back()=='{' ){
                if(s[i]=='}')
                stack.pop_back();
                else return false;}
            else if(stack.size()!=0 && stack.back()=='[' ){
                if(s[i]==']')
                stack.pop_back();
                else return false;}
            else return false;
        }
        if(stack.size()==0)
            return true;
        else return false;
    }
};
