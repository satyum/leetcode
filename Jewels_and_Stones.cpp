class Solution {
public:
    int numJewelsInStones(string J, string S) {
    int count=0;
    for(auto it=S.begin();it!=S.end();++it){
        for(auto it2=J.begin(); it2!=J.end(); ++it2){
            if(*it==*it2){
                count++;
               }

            }
        }
    return count;
    }
};
