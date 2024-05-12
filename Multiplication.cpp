//User function Template for C++
class Solution
{
public:
    vector<int> getTable(int N)
    {
        // Write Your Code here
        vector<int> v(0,N);
        for(int i=1;i<=10;i++)
        {
            v.push_back(N*i);
        }
        return v;
    }
};
