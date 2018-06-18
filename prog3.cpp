// Week of code > Which Section?
// in hackerrank.com

int whichSection(int n, int k, vector<int> a)
{
    int i=a.size();
   
    i--;
    
    while(a[i]!=0)
    {
        if(n==k)
            return ++i;
        else
        {
            n--;a[i]--;
        }
        
        if(a[i]==0)
            i--;
        
            
        
    }   
    return 0;
    
}