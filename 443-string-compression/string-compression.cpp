class Solution {
public:
    void count(vector<char>&s,int c)
    {       
        if(c<10)
        {
        s.push_back(c+48);
        return;
        }
        int l;
        if(c<100)
        l=10;
        else if(c<1000)
        l=100;
        else
        l=1000;
        while(l>0)
        {
            s.push_back((c/l)+48);
            c%=l;
            l/=10;
        }
        return;
    }
    int compress(vector<char>& chars) {
    int c=1;
    vector<char>s;
    /*if(chars.size()==1)
    s.push_back(chars[0]);*/
    char ch=chars[0];
    for(int i=1;i<chars.size();i++)
    {
        if(ch==chars[i])
        {
            ++c;
        }
        else
        {
            s.push_back(ch);
            if(c!=1)
            count(s,c);
            c=1;
            ch=chars[i];
        }
    }
    s.push_back(ch); 
    if(c!=1)
    count(s,c);
    for(char x: s)
    cout<<x;
    chars=s;
    return s.size();
    /*++c;
        if(chars[i]!=chars[i+1]||i==chars.size()-2)
        {
                if(c==1&&i!=(chars.size()-2))
                {
                    s.push_back(chars[i]);
                    continue;
                }
                if(i==chars.size()-2)//
                ++c;
                s.push_back(chars[i]);
                
            c=0;
        }*/
        /*if(chars[i]==chars[i-1])
        {
            ++c;
        }
        if(chars[i]!=chars[i-1]||i==chars.size()-1)
        {
            if(i!=chars.size()-1)
            s.push_back(chars[i-1]);
            else
            s.push_back(chars[i]);
            if(c!=1)
            {
                if(c>9)
                {
                    s.push_back((c/10)+48);
                    s.push_back((c%10)+48);
                }
                else
                s.push_back(c+48);
                c=1;
            }
        }*/
    }

};