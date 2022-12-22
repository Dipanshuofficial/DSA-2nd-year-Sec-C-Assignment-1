vector<int> prefixSums(vector<int> &num){
    vector<int> ans;
    int a=0;
    int s=num.size();
    ans.push_back(a);
    for(int i=0; i<s; i++){
        ans.push_back(ans.back()+num[i]);
    }
    return ans;
}
