class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxAns=0;
        int index=0;
        for(int i=0;i<mat.size();i++){
            int sum=0;
            for(int j=0;j<mat[i].size();j++){
                sum+=mat[i][j];
            }
           
           if(sum>maxAns){
            maxAns=sum;
            index=i;
           }
        }

        return {index,maxAns};
    }
};