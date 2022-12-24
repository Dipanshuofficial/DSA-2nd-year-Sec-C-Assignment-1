#include<bits/stdc++.h>
#include<vector>
using namespace std;
// Error : TLE at TEST CASE 41
long sumInBounds(vector<long> &num, long low, long high){
    long ans = 0;
    for(long i=low; i<=high;  i++){
        // cout<<"Before : "<<num[i]<<ans<<endl;
        ans=ans^num[i];
        // cout<<"After : "<<num[i]<<ans<<endl;

    }
    return ans;
}
int main(){
    long n, q;
    cin >> n;
    vector<long> inp, answer;
    for(long i=0; i<n; i++){
        long temp;
        cin >> temp;
        inp.push_back(temp);
    }
    cin >> q;
    for(long i=0; i<q; i++){
        long low, high;
        cin >> low >> high;
        answer.push_back(sumInBounds(inp, low-1, high-1));
        cout << answer[i] << " ";
    }
    // for(long i=0; i<q; i++){
    // }


    return 0;
}
