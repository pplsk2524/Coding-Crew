// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int n) {
        // code here
        int sum=0,res=0;
        while(n>0)
        {
            sum+=n%10;
            n/=10;
        }
        int temp=sum;
        while(sum>0)
        {
            res=res*10+sum%10;
            sum/=10;
        }
        if(res==temp)
        {
            return 1;
        }
        return 0;
    }
};
