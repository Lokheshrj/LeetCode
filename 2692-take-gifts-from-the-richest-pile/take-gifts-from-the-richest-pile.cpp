class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) 
    {
        priority_queue<int> q;
        long long s=0;
        int x;
        for(int x: gifts)
        {
            q.push(x);
            s+=x;
        }
        while(k)
        {
            x=q.top();
            s-=x-sqrt(x);
            q.pop();
            q.push(sqrt(x));
            --k;
        }
        return s;
    }
    };