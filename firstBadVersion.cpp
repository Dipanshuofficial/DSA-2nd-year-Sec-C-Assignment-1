// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    long firstBadVersion(int n) {
        long h=n, l=1;
        while(l<=h){
            long mid=(l+h)/2;
            if(isBadVersion(mid)){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
        
    }
    // int newf(int l, int n){
    //     int mid=(l+n)/2;
    //     if(isBadVersion(mid)){
    //         return mid-1;
    //     }
    //     return mid+1;
    // }
};
