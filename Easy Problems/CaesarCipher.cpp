// Caesar Ciphar
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string ans = "abcdefghijklmnopqrstuvwxyz";
    string s;
    cin >> n;
    getchar();
    getline(cin , s);

    for(int i=0 ; i < (int) s.length() ; i++)
    {
        if(s[i] == ' ') cout << ' ';
        else {
            int a = s[i] - n - 'a';
            if(a < 0) a += 26;
            cout << ans[a];
        }
    }
    cout << endl;

    return 0;
}
