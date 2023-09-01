/* Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.
*/
class Solution {
public:
    string toLowerCase(string s) {
        string s1="";
        for(char c:s) {
        if(c >='A'&&c<='Z') {char lowercase=c+('a' - 'A');s1+=lowercase;}
        else{s1+=c;}
    }return s1;}
};
