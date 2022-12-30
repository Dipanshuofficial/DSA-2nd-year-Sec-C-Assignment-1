//Sir Ka Logic.
class Solution {
public:
    void erase_zeroes(vector<int> &A, int m, int n){
        A.erase(A.begin()+m,A.begin()+m+n);
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        erase_zeroes(nums1,m,n);
        vector<int>ans;
        int i=0,j=0;
        m=nums1.size();
        n=nums2.size();
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else {
                ans.push_back(nums2[j]);
                j++;
            }
        } 
        while(i<m){
            ans.push_back(nums1[i]);
            i++;      
        }
        while(j<n){
            ans.push_back(nums2[j]);
            j++;
        }
        nums1=ans;
    }
};
