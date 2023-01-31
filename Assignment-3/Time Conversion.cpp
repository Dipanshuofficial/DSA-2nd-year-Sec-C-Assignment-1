#include <bits/stdc++.h>
#include <string>
using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    //to get the format in AM or PM
    string form;
    form[0]=s[8];
    //Remove AM or PM
    s=s.erase(8);
    int hr;
    string str;
    hr=stoi(s);
    if(hr<12 and form[0]=='P'){
        if(hr+12<24){
            hr=hr+12;
            str=to_string(hr);
        }
    }
    else if(hr==12 && form[0]=='P'){
        str=to_string(hr);
    }
    else if(hr==12 && form[0]=='A'){
        hr=0;
        str=to_string(hr);
        str=str+'0';
    }
    else if(hr==0 && form[0]=='A'){
        hr=0;
        str=to_string(hr);
        str=str+'0';
    }
    else{
        str=to_string(hr);
        str='0'+str;
    }
    s[0]=str[0];
    s[1]=str[1];
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
