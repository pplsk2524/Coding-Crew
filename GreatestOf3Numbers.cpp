// User function Template for C++

class Solution {
  public:
    int greatestOfThree(int a,int b,int c){
        // code here
        if(a>b)
        {
            if(a>c)
            {
                return a;
            }
            else
            {
                return c;
            }
        }
        else{
            if(b<c)
            {
                return c;
            }
            else{
                return b;
            }
        }
    }
};
