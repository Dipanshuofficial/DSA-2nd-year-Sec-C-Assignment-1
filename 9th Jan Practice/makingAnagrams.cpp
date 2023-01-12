#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'makingAnagrams' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING s1
 *  2. STRING s2
 */

int makingAnagrams(string s1, string s2) {
    int ans=0;
    int s1freq[26]={0};
    int s2freq[26]={0};
    for(int i=0;i<s1.size();i++){
        s1freq[s1[i]-'a']++;
    }
    for(int j=0;j<s2.size();j++){
        s2freq[s2[j]-'a']++;
    }
    
    for (int k=0; k<26; k++) {
        if (s1freq[k]>s2freq[k]) {
            ans=ans+s1freq[k]-s2freq[k];
        }
        if(s2freq[k]>s1freq[k]){
            ans=ans+s2freq[k]-s1freq[k];
        }
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
