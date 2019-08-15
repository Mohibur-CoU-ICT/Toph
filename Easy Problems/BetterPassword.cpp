// Better Password
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    s[0] = toupper(s[0]);
    cout << s[0];
    for(int i=1 ; i < (int) s.size() ; i++)
    {
        if(s[i] == 's') cout << '$';
        else if(s[i] == 'i') cout << '!';
        else if(s[i] == 'o') cout << "()";
        else cout << s[i];
    }
    cout << '.' << endl;

    return 0;
}
