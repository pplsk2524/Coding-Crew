// User function Template for C++

class Solution{
public:
    long long nPr(int n, int r){
        // code here
        long long res=1;
        for(int i=n;i>(n-r);i--)
        {
            res*=i;
        }
        return res;
    }
};
