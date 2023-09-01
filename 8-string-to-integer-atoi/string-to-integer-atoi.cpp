class Solution 
{
public:
    int myAtoi(string s)
    {
        int o=0,si=0,sp=0,po=0;
        long int r=0;
        for(int i=0;s[i]!='\0';i++) 
        {
            if(r<2147483648)
            {
                        if(r==0&&s[i]=='0') po=1;
                        if(si&&sp) break;
                        if(s[i]=='-'&&r==0)
                        {
                            if(si==1) break;
                            if(po==0) ++si;
                            else break;
                        }
                        if(s[i]=='+'&&r==0)
                        {
                            if(sp==1) break;
                            if(po==0) ++sp; 
                            else break;
                        }
                        if(s[i]>=48&&s[i]<=57&&r<2147483648)
                        r=(r*10)+(s[i]%48);
                        else if(r==0&&((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||s[i]=='.'))
                        break;
                        else if(r>0&&(!(s[i]>=48&&s[i]<=57)))
                            break; 
                        if(po==1||si==1||sp==1)
                        {
                            if(s[i]==' ')
                            break;
                        }
                        
            }
            else 
            {
            o=1;
            break;
            }
        }
        if(o==1)
        {
            if(si)
            return pow(-2,31);
            else
            return (pow(2,31)-1);
        }
        else
        {    
        if(si==0)
        {
        if(r<(pow(2,31)-1))
        return (r);
        else
        return (pow(2,31)-1);
        }
        else
        {
        if(r>=0&&r<=pow(2,31)-1)
            return (0-r);  
        else
        return pow(-2,31); 
        }
        } 
    }
};