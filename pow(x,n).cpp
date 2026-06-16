//Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

class Solution {
public:
    double myPow(double x, int n) {
        if(x==0)return 0.0;
        if(n==0)return 1.0;
        if(x==1)return 1.0;
        if(x==-1 and n%2==0)return 1.0;
        if(x==-1 and n%2!=0)return -1.0;
        long bf=n;
        double ans=1;
        if(n<0){
            x=1/x;
            bf=-bf;
        }
        while(bf>0){
            if(bf%2==1){
                ans*=x;
            }
            x*=x;
            bf/=2;
        }
        return ans;
    }
};
