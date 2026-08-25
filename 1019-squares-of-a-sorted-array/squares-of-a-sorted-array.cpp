class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        multiset<int>s;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0) nums[i]*=-1;
            s.insert(nums[i]);
        }
        vector<int>result;
        for(int x:s){
            result.push_back(x*x);
        }

        return result;

    }
};