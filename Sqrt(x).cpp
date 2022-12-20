class Solution {
public:
    int mySqrt(int x) {
        long l=1, r=x,m;
        while(l<=r){
            m=(l+r)/2;
            if((m*m)==x){
                return m;
            }
            if((m*m)<=x){
                if(((m+1)*(m+1))>x){//check if between squares of nearest.
                    return m;
                }
                l=m+1;
            }
            else if((m*m)>x){
                r=m-1;
            }
        }
        return 0;
    }
};
