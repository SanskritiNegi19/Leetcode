class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
       
       set<int>st;

       for(int x:nums) st.insert(x);

       int number =k;

       while(st.count(number)){
        number+=k;
       }

       return number;

    }
};