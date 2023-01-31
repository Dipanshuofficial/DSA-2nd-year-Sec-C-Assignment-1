#include <bits/stdc++.h>
using namespace std;
int upperbound(vector<int> &nums, int target){
    int l, h, ans=-1;
    l=0;
    h=nums.size()-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(nums[mid]<=target){
            if(nums[mid]==target){
                ans=mid;
            }
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return ans;
}
int lowerbound(vector<int> &nums, int target){
        int l, h, ans=0;
        l=0;
        h=nums.size()-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]>=target){
                if(nums[mid]==target){
                    ans=upperbound(nums, target)+1;
                    return ans;
                }
                ans=mid-1;
                h=mid-1;
            }
            else{
                ans=mid+1;
                l=mid+1;
            }
        }
        if(ans==-1){
            return 0;
        }
        return ans;
    }
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> inp, quer;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        inp.push_back(temp);
    }
    for(int i=0; i<k; i++){
        int temp;
        cin >> temp;
        quer.push_back(temp);
    }
    for(int i=0; i<k; i++){
        cout<<lowerbound(inp, quer[i])<<endl;
    }

    return 0;
}
