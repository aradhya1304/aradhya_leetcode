class Solution 
{
public:
    bool isPalindrome(int x){
        int y=x;
        long long sum=0;
        long long rem;
       while(x>0)
        {
        rem=x%10;
        sum=sum*10+rem;
        x=x/10;
        }
    
       if(sum==y)
    
        return true;
    
       else
       return false;
       
    }
    
 };
    
 