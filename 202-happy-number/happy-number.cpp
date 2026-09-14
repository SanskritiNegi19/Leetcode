class Solution {
public:
    bool isHappy(int n) {

        set<int>seen;

        while(n!=1){
            if(seen.find(n) != seen.end()) //if already present then remove
                return false;

            seen.insert(n);
            int square=0;
            while(n!=0){
            int r=n%10;
            square=r*r+square;
            n=n/10;
            }
         n=square;

        }
      return true;
    }
};