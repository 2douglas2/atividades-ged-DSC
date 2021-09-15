class Solution {
public:
    string toLowerCase(string s) {
        char mask = 0b00100000;
        for ( string::iterator it=s.begin(); it!=s.end(); ++it) {
            if(*it>64&&*it<91) *it=*it|mask;
        }
        return s;
    }
};