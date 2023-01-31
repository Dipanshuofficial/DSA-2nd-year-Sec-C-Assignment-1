#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int A[n];
    for(int i=0; i<n; ++i){
        cin >>A[i];
    }
    for(int k=(n-1); k>=0; k--){
        cout << A[k]<<" " ;
    }
    return 0;
}
