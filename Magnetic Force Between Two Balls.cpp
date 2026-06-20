//In the universe Earth C-137, Rick discovered a special form of magnetic force between two balls if they are put in his new invented basket. Rick has n empty baskets, the ith basket is at position[i], Morty has m balls and needs to distribute the balls into the baskets such that the minimum magnetic force between any two balls is maximum.
//
//Rick stated that magnetic force between two different balls at positions x and y is |x - y|.
//
//Given the integer array position and the integer m. Return the required force.

class Solution {
public:
    int maxDistance(vector<int>& v, int m) {
           int n=v.size();
    sort(v.begin(),v.end());
    int ma=v[0];
    int mx=v[n-1];
    
    
    
    int st=1,ans=0;
    int ed=mx,mid=0;
    int c=0;
    while(st<=ed)
    {c++;
        
        mid=(st+ed)/2;
        int mm=m-1;
         int j=0;
        for(int i=1;i<n;i++)
        {
            if(v[i]-v[j]>=mid)
            {mm--;
             j=i;
            }
               
                
                
           
            
        }
        //cout<<ans<<" "<<mm<<mid<<endl;
            
        if(mm>0)
            ed=mid-1;
        else
        {st=mid+1;
            ans=max(ans,mid);}
        
        
    }
    
   return ans; 
    
    
}
        
    
};
