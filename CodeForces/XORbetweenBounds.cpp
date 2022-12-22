int sumInBounds(vector<int> &num, int low, int high){
    int ans = 0;
    for(int i=0; i<=high;  i++){
        ans=ans^num[i];
    }
    return ans;
}
