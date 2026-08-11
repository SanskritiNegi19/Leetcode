class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords=INT_MIN;
        for(int i=0;i<sentences.size();i++)
        {
            string s=sentences[i];
            bool word=false;
            int count=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]!=' ' && word==false) {
                    word=true;
                    count++;
                }
                else if(s[i]==' '){
                    word=false;
                }
            }

            maxWords=max(count,maxWords);
        }

        return maxWords;
    }
};