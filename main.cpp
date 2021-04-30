class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        vector<int> arr(2);
        map<int,int>m1;
        for(int i=0;i<nums.size();++i)
            m1[nums[i]]=i;

        for(int i=0;i<nums.size();++i){
            int point =target-nums[i];
            if(m1[point] && m1[point]!=i){
                arr[0]=i;
                arr[1]=m1[point];
            }

        }
        return arr;
    
    }
};
