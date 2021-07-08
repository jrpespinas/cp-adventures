class Solution {
public:
    string interpret(string command) {
        string parsed = "";
        
        for (int i = 0; i < command.size(); i++){
            if (command[i]=='(' && command[i+1]==')'){
                parsed += "o";
                i+=1;
            }
            else if (command[i]=='(' && command[i+1]=='a'){
                parsed += "al";
                i+=3;
            }
            else
                parsed += command[i];
            
        }
        return parsed;
    }
};