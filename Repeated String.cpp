#include <bits/stdc++.h>

using namespace std;


/*
 * Complete the 'repeatedString' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. LONG_INTEGER n
 */

long repeatedString(string s, long long n) {
    int i;
    long long count=0;
    for(i=0;i<s.size();i++){
        if(s[i] == 'a')
        count++;
    }
    count *= n/s.size();
    
    for (i=0;i<n%s.size();i++){
        if(s[i] == 'a')
        count++;
    }
    // for(i=0;i<n;i++)
    // cout<<sNew[i];
    
    return count;

}

int main()
{
    long long n;
    string s;
    cin>>s;
    cin>>n;

    long long result = repeatedString(s, n);

    cout << result << "\n";


    return 0;
}


