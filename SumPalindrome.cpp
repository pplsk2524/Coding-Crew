// User function Template for C++
class Solution {
  public:
    long long reverse(long long k){
        long long rev=0;
        while(k>0)
        {
            rev=rev*10+k%10;
            k/=10;
        }
        return rev;
    }
    long long isSumPalindrome(long long n){
        // code here
        int i=1;
        long long sum=0;
        if(reverse(n)==n)
        {
            return n;
        }
        else
        {
            while(i<=5)
            {
            sum=reverse(n)+n;
            if(reverse(sum)==sum)
            {
                return sum;
                break;
            }
            n=sum;
            i++;
            }
        }
        return -1;
        
    }
};
