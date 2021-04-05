class Solution {
public:
    string removeDuplicates(string S) {
        string st;
        int j=0;
        for(int i=0;i<S.length();i++){
            if(st.length()>0 && st[j-1]==S[i]){
                st.pop_back();
                j--;
            }
            else {
                st.push_back(S[i]);
                j++;
            }
        }
        return st;
    }
};
