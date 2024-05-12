
class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        if(b==0)
            return a;
        if(a==0)
            return b;
        if(a>b)
            return gcd(a%b,b);
        return gcd(a,b%a);
    }
};
