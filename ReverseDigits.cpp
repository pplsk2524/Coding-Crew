class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    // Code here
		    long long int res=0;
		    while(n>0)
		    {
		        res=res*10+n%10;
		        n=n/10;
		    }
		    return res;
		}
};
