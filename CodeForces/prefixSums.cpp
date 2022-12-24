#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<long> prefixSums(vector<long> &num){
    vector<long> ans;
    long a=0;
    long s=num.size();
    ans.push_back(a);
    for(long i=0; i<s; i++){
        long temp=ans.back();
        ans.push_back(temp+num[i]);
    }
    return ans;
}
void prlongvect(vector<long> &ans, long n){
    for(long i=0; i<=n; i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    long n;
    cin>>n;
    vector<long> juft, sol;
    for(long i=0;i<n; i++){
        long temp;
        cin>>temp;
        juft.push_back(temp);
    }
    sol=prefixSums(juft);
    prlongvect(sol,n);    
    return 0;
}
