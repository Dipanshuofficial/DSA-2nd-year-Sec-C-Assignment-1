#include <bits/stdc++.h>
using namespace std;
void count_sort(vector<int> &arr, int max){
    vector<int> A(max+1,0);
    int s= arr.size();
    for(int i=0; i<s;i++){
        A[arr[i]]++;
        // cout<<" i : "<<i<<" arr["<<i<<"] : "<<arr[i]<<" A["<<arr[i]<<"] : "<<A[arr[i]]<<endl;
    }
    int k=0;
    for(int i=0; i<s;i++){
        for(int j=0; j<A[i]; j++){
            arr[k]=i;
            // cout<<"update k: "<<k<<" i : "<<i<<" A[i] : "<<A[i]<<endl;
            k++;
        }
    }
    
}
vector<int> input_vector(int n){
    vector<int> ans;
    for(int i=0; i<n; i++){
        int te;
        cin >> te;
        ans.push_back(te);
    }
    return ans;
}
void print_vector(vector<int> A){
    for(int i=0; i<A.size(); i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int k;
    cin >> k;
    vector<int> vec;
    vec=input_vector(k);
    int n;
    n=*max_element(vec.begin(), vec.end());
    count_sort(vec, n);
    print_vector(vec);
    return 0;
}
