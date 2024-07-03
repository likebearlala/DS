class Solution {
public:
    bool isValid(string s) {
        stack<char>stk;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){//注意要用單引號不然會compile error
                stk.push(s[i]);
            }
            else{
                if(!stk.empty()){
                    int check=stk.top();
                    stk.pop();
                    switch(s[i]){
                       case')':
                            if(check!='(') return false;
                            break;
                        case']':
                            if(check!='[') return false;
                            break;
                        case'}':
                            if(check!='{') return false;
                            break;     
                    }
                        
                }
                else
                    return false;
                
            }
        }
        if(stk.empty()){
            return true;
        }
        return false;
}
};

