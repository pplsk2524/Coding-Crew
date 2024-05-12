//User function Template for C++

class Solution
{
	public:
		int count_divisors(int n)
		{
		    //Code here.
		    int c=0;
		    for(int i=1;i<=sqrt(n);i++)
		    {
		        if(n%i==0)
		        {
		            if (i%3==0)
		            {
		                c++;
		            }
		            if(n!=i*i && (n/i)%3==0)
		            {
		                c++;
		            }
		        }
		    }
		    return c;
		}
};
