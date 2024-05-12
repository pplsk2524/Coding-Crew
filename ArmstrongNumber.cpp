// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int k=n;
        int r,c=0;
        while(k>0)
        {
            r=k%10;
            c+=pow(r,3);
            k=k/10;
        }
        if(n==c)
        {
            return "Yes";
        }
        else
        {
            return "No";
        }
    }
};
