class Solution {
public:
    int lengthOfLastWord(string s) {
     int count=0;
    for(auto it=s.rbegin();it!=s.rend();++it){
        if(*it==' ' && count!=0){
        break;
        }
        if(*it!= ' '){
        ++count;
        }
    }
    return count;
  
    }
};
