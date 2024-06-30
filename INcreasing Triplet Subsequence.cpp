class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first=2147483647   , two=2147483647   ,three=2147483647  ;
        if (nums.size()<3)return false;
        int a=0,b=0,c=0;
        for(auto x: nums)
        {
            if(x<=first)
            {
                first=x;
                a=1;
            }
            if(x<=two && x>first)
            {
                two=x;
                b=1;
            }
            if(x<=three && x>two)
            {
                three=x;
                c=1;
            }
            if(first<two && two <three)
            {
                if(a!=0   &&  b!=0    && c!=0   )
                {
                   return true;

                }

            }
        }
        return false;
    }
};
