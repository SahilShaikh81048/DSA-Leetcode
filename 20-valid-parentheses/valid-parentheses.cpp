class Solution {
public:
    bool isValid(string s) {
        stack<char> hola;
        for (int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                hola.push(s[i]);
            }
            else {
                if (hola.empty()){
                    return false;
                }
                else if(s[i]==')' && hola.top()=='('){
                    hola.pop();
                }
                else if(s[i]==']' && hola.top()=='['){
                    hola.pop();
                }
                else if(s[i]=='}' && hola.top()=='{'){
                    hola.pop();
                }
                else{
                    return false;
                }
            }
        }
        return hola.empty();
    }
};