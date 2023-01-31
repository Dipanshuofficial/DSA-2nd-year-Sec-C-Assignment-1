class Solution {
public:
    long arrangeCoins(long n) {
        long l=1,h=n, mid;
        while(l<=h){
            mid=(l+h)/2;
            if(coins(mid)<=n){
                if(coins(mid+1)>n){
                    if(n-coins(mid)<mid){
                        // if(n-coins(mid)==0){
                        //     return mid;
                        // }
                        return mid;
                    }
                }
                l=mid+1;
            }
            else
                h=mid-1;
        }
        // if(n%5==0){
        //     return h-1;
        // }
        return h;

        //     if(coins(mid)<=n){
        //         if(coins(mid+1)>n){
        //             if(n%2!=0){
        //                 return mid;
        //             }
        //             return mid-1;
        //         }
        //         l=mid+1;
        //     }
        //     else if(coins(mid)>n){
        //         h=mid-1;
        //     }
        // }
        // mid=(l+h)/2;
        // return mid+1;
    }
    long coins(long a){
        return (a*(a+1))/2;
    }
};
